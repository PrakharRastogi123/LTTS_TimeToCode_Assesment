#include "Utilities.h"


int main(){
    complex_no num1,num2,sum_val,sub_val,mult_val,div_val;

    num1.real=5.2;
    num1.imaginary=2.0;
    num2.real=4.0;
    num2.imaginary=2.2;

    errno_t sum = add(num1,num2,&sum_val);

    if(sum==DIV_BY_ZERO){
        printf("div by zero occured\n");
    }
    else if(sum==NULL_VAL){
        printf("NULL value Occured\n");
    }
    else{
        printf("SUCCESS\n");
    }
    
    errno_t sub = subtract(num1,num2,&sub_val);

    if(sub==DIV_BY_ZERO){
        printf("div by zero occured\n");
    }
    else if(sub==NULL_VAL){
        printf("NULL value Occured\n");
    }
    else{
        printf("SUCCESS\n");
    }

    errno_t mult = multiply(num1,num2,&mult_val);

    if(mult==DIV_BY_ZERO){
        printf("div by zero occured\n");
    }
    else if(mult==NULL_VAL){
        printf("NULL value Occured\n");
    }
    else{
        printf("SUCCESS\n");
    }

    errno_t div = divide(num1,num2,&div_val);

    if(div==DIV_BY_ZERO){
        printf("div by zero occured\n");
    }
    else if(div==NULL_VAL){
        printf("NULL value Occured\n");
    }
    else{
        printf("SUCCESS\n");
    }


    return 0;
}



