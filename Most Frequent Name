#include <stdio.h>
#include <string.h>  

struct Persons {
    char name[200];
    int age;
};

struct Frequency {
    char name[200];
    int freq;
};

struct List {
    char name[200];
    float avg=0.00;
    int sum=0;
};

void mread(struct Persons* list, int &i) { // to reference i so it changes in main too
    while(1) {
        if(scanf("%s %d", &list[i].name, &list[i].age)<1) break;
        i++;
        
    }
}

void nameFrequency(struct Persons* list, struct Frequency* freq, int &i, int &j, int &k, int &f) {
    for(j=0;j<i;j++) {
        for(k=0;k<i;k++) {
            if(strcmp(list[j].name, list[k].name) == 0) {
                f++;
            }
        }
        freq[j].freq = f;
        strcpy( freq[j].name, list[j].name);
        f=0;
    }
}

void maxFreq(int &j, int &i, int &max, struct Frequency* freq) {
    for(j=0;j<i;j++) {
      if(freq[j].freq > max) {
          max = freq[j].freq;
      }
  }
}

void freqAvg(struct Persons* list, struct Frequency* freq, struct List* final, int &j, int &i, int &k, int &m, int &max) {
    for(j=0, m=0;j<i;j++) {
        for(k=0;k<i;k++) {
            if(strcmp(freq[j].name, freq[k].name) == 0 && freq[j].freq == max) {
                final[j].sum += list[k].age;
            }
        }
        if(freq[j].freq == max) {
            strcpy( final[m].name, list[j].name);
            final[m].avg = final[j].sum/(max*1.0);
            m++;
        }
    }
}

void sortFreq(struct List temp, struct List* final, int &k, int &m, int &j) {
    for(j=m;j>0;j--) {
    for(k=0;k<m-1;k++) {
         if(strcmp(final[k].name, final[k+1].name)>0) {
            temp = final[k];
            final[k] = final[k+1];
            final[k+1] = temp;
        }
    }
    }
}

void printUnique(struct List* final, int &m, int &j) {
    for(j=0; j<m;j++) {
        if(j == 0) {printf("%s %.2f ", final[j].name,final[j].avg); if(j!=m) printf("\n");}
        else if(strcmp(final[j-1].name, final[j].name) !=0) {
            printf("%s %.2f ", final[j].name,final[j].avg);
            if(j!=m) printf("\n");
        }
        
    }
}


int main()
{
    struct Persons list[1000] = {0};
    int i=0, j=0, k=0, f=0, max=0, m=0;
    Frequency freq[1000] = {0};
    List temp;
    List final[1000] = {0};
    mread(list, i);
    /* Frequency of each name */
    nameFrequency(list, freq, i, j, k, f);
   
   /* Find max repetition */
    maxFreq(j, i, max, freq);
  
  /* get averages of most frequents*/
  
  freqAvg(list, freq, final, j, i, k, m, max);
    
    
    /* sort these frequencies */
    
    sortFreq(temp, final, k, m, j);
    
    /* print only 1 instance for each unique name*/
    
    printUnique(final, m, j);
   

    return 0;
}
