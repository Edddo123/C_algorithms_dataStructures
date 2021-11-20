#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/*
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
*/

char *accum(const char *source) {
  
  char *a = (char *)calloc(1000, sizeof(char));
  int i=0, j=0, f=0;
  
  
  for(i=0; source[i] != '\0';i++) {
    
    for(j=0; j<=i;j++) {
        
        if(isupper(source[i]) && j!=0) {
          a[f++] = source[i] + 32;
        } else if(islower(source[i]) && j==0) {
          a[f++] = source[i] - 32;
        } else {
          a[f++] = source[i];
        }
      
      
    }
   
    a[f++] = '-';
     
  }
  int len = strlen(a);
  a[len-1] = '\0';
  
  return a;
}
