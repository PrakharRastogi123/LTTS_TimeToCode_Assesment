#include "Utilities.h"

int fileReadUtil(FILE **fptr, char *buffer){
    return fscanf(*fptr,"%s",buffer);
}
