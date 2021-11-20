#include <stdio.h>
#include <string.h>

void getIdentifiers(int c, char word[1000][1000], int identIndex[10000], int &i, int &j, int &m, int &isIdent, int &correct ) {
    while(1) {
        c = fgetc(stdin);
    if ( (c >= 'a' && c <= 'z') || (c >='A' && c <='Z') || (c == '_') || ( c >= '0' && c <= '9' && isIdent == 1)) {
                    word[i][j] = c;
                    j++;
                   isIdent = 1;
               }
                else if(c == ' ' || c == '\n' || c==EOF) {
                    if(c != EOF) {
                     word[i][j] = c;
                        j++;
                    }
                   if(isIdent == 1 && correct == 1) {
                       identIndex[m] = i;
                       m++;
                   }
                    i++;
                    j=0;
                    correct = 1;
                    isIdent = 0;
                    if (c == EOF) break;
                   
               }
                else{ 
                   isIdent = 0;
                   correct = 0;
                   word[i][j] = c;
                    j++;
               }
    }
}

void reverse(int &f, int identIndex[10000], int k, int &j, int r, int &i, char word[1000][1000], char reversed[1000][1000]) {
    for(f=0;f<i;f++) {
       
            if(f == identIndex[k]) {
            for(j=0;j < strlen(word[f]); j++) {
               
               reversed[r][j] = word[f][strlen(word[f])-j-1];
            
            }
            r++;
            k++;
            }
        }
}

void correctSpace(int &f, int identIndex[10000], int k, int &j, int r, int &i, char word[1000][1000], char reversed[1000][1000]) {
    for(f=0;f<i;f++) {
            if(f == identIndex[k]) {
            for(j=0;j < strlen(word[f]); j++) {
                if(j==strlen(word[f]) - 1) {
                    if(reversed[r][0] == ' ' ) {
                  word[f][j] = ' ';  
                    }
                    else if (reversed[r][0] == '\n') {
                      word[f][j] = '\n';  
                    }
                }
                
                 else {
              word[f][j] = reversed[r][j+1];
                 }
            }
            k++;
            r++;
            }
        }
}

void write(int &f, int &j, int &i, char word[1000][1000]) {
    for(f=0;f<i;f++) {
            if(f!=i) {
            for(j=0;j < strlen(word[f]); j++) {
                printf("%c", word[f][j]);
            }
            }
            else {
                for(j=0;j < strlen(word[f]); j++) {
                printf("%c", word[f][j]);
            }
            }
            
        }
}


int main() {
    
    unsigned int c;
    char word[1000][1000];
    char reversed[1000][1000];
    int isIdent = 0, i=0, j=0, m=0, f=0, k=0, r=0;
    int correct = 1;
    int identIndex[10000];

    getIdentifiers(c, word, identIndex, i, j, m, isIdent, correct);
    reverse(f, identIndex, k, j, r, i, word, reversed);
    correctSpace(f, identIndex, k, j, r, i, word, reversed);  
    write(f, j, i, word);       
    
    
		return 0;
}
