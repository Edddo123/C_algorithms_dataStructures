#include <stdio.h>
int main() {
    int i,j;
    // int k,n;
    // scanf
    int k,n;
    scanf("%d",&k);
    n=4*k+14;
  char arr[100][200];
  for(i=0;i<n/2;i++){
      arr[i][0]='*';
      
      for(j=0;j<n;j++){ 
           arr[0][j]='*';
           arr[n/2-1][j]='*';
           
        
      }
      
    
  
  }
  for(i=1;i<n/2-1;i++){
      for(j=1;j<n;j++){
          arr[i][j]=' ';
          
      }
   }
   
   for(i=0;i<n;i++){
       arr[i][n/2-1]='*';
       arr[i][n/2]='*';
   }
    
   
   for(i=0;i<n/2;i++){
       arr[i][n-1]='*';
   }
   
   for(i=0;i<n/2;i++){
      for(j=0;j<n;j++){
       if((i == ((n / 2 - 1) / 2 - 1) && j == ((n / 2 - 1) / 2)) || (i == ((n / 2 - 1) / 2 - 1) && j == (n/2 + (n / 2 - 1) / 2)))
				arr[i][j] = '*';
			else if ((i == ((n / 2 - 1) / 2 + 1) && j == ((n / 2 - 1) / 2)) || (i == ((n / 2 - 1) / 2 + 1) && j == (n / 2 + (n / 2 - 1) / 2)))
				arr[i][j] = '*';
			else if ((i == ((n / 2 - 1)/2) && j == ((n / 2 - 1) / 2)) || (i == ((n / 2 - 1) / 2) && j == ((n / 2 - 1) / 2)-1) || 
				(i == ((n / 2 - 1) / 2) && j == ((n / 2 - 1) / 2)+1) || (i == ((n / 2 - 1) / 2) && j == (n/2 + (n / 2 - 1) / 2)) ||
				(i == ((n / 2 - 1) / 2) && j == (n/2+(n / 2 - 1) / 2)-1) || (i == ((n / 2 - 1) / 2) && j == (n / 2 + (n / 2 - 1) / 2) + 1))
				arr[i][j] = '*';
   }}
    
   for(i=0;i<n/2;i++){
      for(j=0;j<n;j++){ printf("%c",arr[i][j]);}
      printf("\n");
   }
   for(i=0;i<n/2;i++){
       for(j=0;j<n;j++){ printf("%c",arr[i][j]);}
       printf("\n");
   } 
}
