#include "Utilities.h"

errno_t divide(complex_no num1, complex_no num2, complex_no* res){
     if(res==NULL){
         return NULL_VAL;
     }
     float r1 = num1.real*num2.real+num1.imaginary*num2.imaginary;
     float r2 = num1.imaginary*num2.real-num1.real*num2.imaginary;
     float r3 = num2.real*num2.real+num2.imaginary*num2.imaginary;
     if(r3==0){
         return DIV_BY_ZERO;
     }
     
     res->real=r1/r3;
     res->imaginary=r2/r3;

     return OK;
}
