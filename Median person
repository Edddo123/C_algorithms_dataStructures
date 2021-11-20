#include <stdio.h>
#include <string.h>  

struct Persons {
    char name[200];
    int age;
};

void mread(struct Persons* list, int &i) { // to reference i so it changes in main too
    while(1) {
        if(scanf("%s %d", &list[i].name, &list[i].age)<1) break;
        i++;
        
    }
}

void sortStruct(struct Persons* list, int &i, int &j, int &k, struct Persons temp) {
    for(j=i;j>0;j--) {
    for(k=0;k<i-1;k++) {
        if(list[k].age > list[k+1].age) {
            temp = list[k];
            list[k] = list[k+1];
            list[k+1] = temp;
        } else if(list[k].age == list[k+1].age && strcmp(list[k].name, list[k+1].name)>0) {
            temp = list[k];
            list[k] = list[k+1];
            list[k+1] = temp;
        }
    }
    }
}

void mwrite(struct Persons* list, int &i) {
    if(i%2 == 0) {
        printf("%s %d", list[i/2-1].name, list[i/2-1].age);
        printf("\n");
        printf("%s %d", list[i/2].name, list[i/2].age);
    } else {
        printf("%s %d", list[i/2].name, list[i/2].age);
    }
}


int main()
{
    struct Persons list[1000];
    int i=0, j=0, k=0;
    mread(list, i);
    Persons temp;
    sortStruct(list, i, j, k, temp);
    mwrite(list, i);
    

    return 0;
}
