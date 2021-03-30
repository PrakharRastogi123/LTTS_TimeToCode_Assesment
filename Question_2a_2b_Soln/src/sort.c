#include "Utilities.h"

int comparator(const void *user1,const void *user2){
    
    return strcmp(((info_t*)user1)->name,((info_t*)user2)->name);
  
}

void sortUtil(info_t *arr){
    if(arr==NULL){
        return;
    }
    qsort(arr,5,sizeof(info_t),comparator);
}
