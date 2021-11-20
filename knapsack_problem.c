#include <stdio.h>

/*
 1) Read in data in array of structs and also calculate per weight value of item
 2) Sort these values
 3) 
*/

struct item {
    int weight;
    int value;
    float perValue;
};

int main () {
    struct item itemList[1000];
    struct item temp;
    int bagSize=0, totalItems=0, i, j, cumulativeValue=0, cumulativeWeight=0;
    scanf("%d %d", &bagSize, &totalItems);
    
    /* Read in items and calculate their per 1 weight value */
    for(i=0;i<totalItems;i++) {
        scanf("%d %d", &itemList[i].weight, &itemList[i].value);
        itemList[i].perValue = (float)itemList[i].value/(float)itemList[i].weight;
    }
    
    /* Sort these pervalues with bubble sort */
    for(j=totalItems;j>0;j--) {
    for(i=0;i<totalItems-1;i++) {
         if(itemList[i].perValue < itemList[i+1].perValue) {
            temp = itemList[i];
            itemList[i] = itemList[i+1];
            itemList[i+1] = temp;
        }
    }
    }
    
    for(i=0;i<totalItems;i++) {
        if(cumulativeWeight + itemList[i].weight < bagSize) {
           cumulativeValue += itemList[i].value; 
           cumulativeWeight += itemList[i].weight;
        }
        else break;
    }
    printf("%d", cumulativeValue);
  
 
  return 0;
}
