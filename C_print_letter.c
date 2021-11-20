#include <stdio.h>

int main()
{
    int i,j;
    char arr[100][200];
    int h = 4;
    int height = 2*h-1;
    int width = 7;
    
    for(i=0;i<height;i++){
      
      for(j=0;j<width;j++){ 
          if(j==0 || i==0 || i==height-1 || i==(height-1)/2) {
           arr[i][j]='*';
          }
          else {
              arr[i][j]='.';
          }
      }
  }
  
  for(i=0;i<height;i++){
      for(j=0;j<width;j++){ printf("%c",arr[i][j]);}
      printf("\n");
   }

    return 0;
}
