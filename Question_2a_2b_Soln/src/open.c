#include "Utilities.h"

error_handler fileOpenUtil(char *fileaddr,char *mode, FILE **fptr){
    *fptr=fopen(fileaddr,mode);
    if(fptr==NULL){
        return NO_FILE;
    }
    else{
        return OK;
    }
}