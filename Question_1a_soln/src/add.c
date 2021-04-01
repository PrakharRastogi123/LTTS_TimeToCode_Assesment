#include "Utilities.h"

errno_t add(complex_no num1, complex_no num2, complex_no* res){
     if(res==NULL){
         return NULL_VAL;
     }

     res->real=num1.real+num2.real;
     res->imaginary=num1.imaginary+num2.imaginary;

     return OK;
}
