#include <stdio.h>
#include <string.h>

int main(){
	
        unsigned int c;

        int isIdent = 0, i=0, j=0, m=0, l=0, x=0, s=0;
        int correct = 1;
    
        int count[1000] = {0};
        
		while(1) {
                c = fgetc(stdin);
                
                s++;
                if ( (c >= 'a' && c <= 'z') || (c >='A' && c <='Z') || (c == '_') || ( c >= '0' && c <= '9' && isIdent == 1)) { /* if ident only then number is not a prob*/
                   isIdent = 1;
               }
                else if(c == ' ' || c == '\n' || c==EOF) {
                    
                   if(isIdent == 1 && correct == 1) {
                       m++;
                       x++;
                       count[l] = x;
                   }
                    i++;
                    if(c== '\n') {
                           
                           l++;
                           x=0;
                       }
                    correct = 1;
                    isIdent = 0;
                    if (c == EOF) break;
               }
                else{ /* if((c<'a' || c>'z') && (c<'A' || c>'Z') && (c!= '_') && (c < 0 || c > 9)) */
                   isIdent = 0;
                   correct = 0;
               }
        }
        
       
        
    
      for(j=0;j<l;j++) {
          printf("%d", count[j]);
          if(j!=l) {
              printf("\n");
          }
      } 
        
        
		
		return 0;
}
