#include <stddef.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Put space when you meet upper char



char* solution(const char *camelCase) {
  int i=0, f=0;
  int in_len = strlen(camelCase);
  char *new = (char *)calloc(in_len, sizeof(char));
  
  for(i=0; camelCase[i] != '\0'; i++) {
    if(camelCase[i] >= 65 && camelCase[i] <= 90) {
      new[f] = ' ';
      new[++f] = camelCase[i];
    } 
   else {
     new[f] = camelCase[i];
   }
        f++;
  }
  
  return new;
}

// interesting similar solution found on site:
// #include <ctype.h>
// #include <stddef.h>
// #include <stdlib.h>
// #include <string.h>

// char *solution(const char *camelCase)
// {
//   int in_len = strlen(camelCase);
//   char *output = calloc(in_len * 2, sizeof(char));
//   for (int i = 0, k = 0; i < in_len; i++, k++)
//   {
//      if (i >= 1 && isupper(camelCase[i]))
//      {
//         output[k] = ' ';
//         k++;
//      }
//      output[k] = camelCase[i];
//   }
//   return output;
// }