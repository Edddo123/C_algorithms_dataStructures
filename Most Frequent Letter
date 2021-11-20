#include <stdio.h>
#include <string.h>





int main()
{
    char names[1000][1000];
    char even[1000];
    char odd[1000];
   
    int i=0, j=0, s=0, f=0,b=0 , counts = 0, countb=0;
    int small[100];
    int big[100];
    
    while(1) {
        if(scanf("%s", names[i])<1) break;
        i++;
    }
    
    /* Separate odd big letters and even small letters */
    
    for(j=0;j<i;j++) {
        if(strlen(names[j]) % 2 == 0 ) {
            for(f=0;f<strlen(names[j]);f++) {
                if(names[j][f] >= 'a' && names[j][f] <= 'z') {
                    
                even[s] = names[j][f];
                s++;
                }
            }
            
        }
        
        if(strlen(names[j]) % 2 != 0 ) {
            for(f=0;f<strlen(names[j]);f++) {
                if(names[j][f] >= 'A' && names[j][f] <= 'Z') {
                odd[b] = names[j][f];
                b++;
                }
            }
        }
    }
    
   
    
    /* Count number of each letter */
    
    for(j=0;j<s;j++) {
       for(f=0;f<s;f++) {
           if(even[j] == even[f]) {
               counts++;
           }
       }
       small[j] = counts;
       counts=0;
    }
    
    for(j=0;j<b;j++) {
       for(f=0;f<b;f++) {
           if(odd[j] == odd[f]) {
               countb++;
           }
       }
       big[j] = countb;
       countb=0;
    }
    
    
    
    
    /* find max of small letters and big letters */
    
    int maxs=0;
    int maxb=0;
    for(j=0;j<s;j++) {
     
           if(small[j] > maxs) {
               maxs = small[j];
       }
    }
    
    for(j=0;j<b;j++) {
           if(big[j] > maxb) {
               maxb = big[j];
           }
    }
    
    printf("%d %d", maxs, maxb);

    return 0;
}
