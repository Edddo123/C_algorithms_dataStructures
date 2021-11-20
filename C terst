#include <stdio.h>

int main()
{
    
    int n, i;
    float sum=0,Avg=0;
	
    scanf("%d", &n);
    int arr1[n];
      
       for(i=0;i<n;i++)
            {
	     
	      scanf("%d",&arr1[i]);
	      sum+=arr1[i];
	    }  
	    
    Avg=sum/n;
    printf("%.2f\n",Avg);

     for(i=0;i<n;i++) {
         for(int j=i+1;j<n;j++){
              if(arr1[i]>Avg && arr1[i]<arr1[j]) printf("%d ",i+1);
            else  if(arr1[i]>Avg && arr1[i]==arr1[j]){
              printf("%d ",i+1);
              break;
            } 
             
         }
     }
    
    
    
} 
