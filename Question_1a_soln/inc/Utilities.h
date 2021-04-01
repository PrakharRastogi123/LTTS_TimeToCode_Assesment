#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * @file Utilities.h
 * @author Prakhar Rastogi - 256102 (prkharrastogi99.pr@gmail.com)
 * @brief Complex Calculator Solution
 * @version 0.1
 * @date 2021-04-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __UTILITY_H__
#define __UTILITY_H__


/**
 * @brief error handling using flags
 * 
 */



typedef enum error_t{
    DIV_BY_ZERO = -2,
    NULL_VAL=-1,
    OK = 1
}error_t ;


/**
 * @brief  structure of a complex number
 * 
 */



typedef struct complex_no{
    float real;
    float imaginary;

}complex_no;


/**
 * @brief add utility
 * 
 * @param num1 
 * @param num2 
 * @param res 
 * @return errno_t 
 */


errno_t add(complex_no num1, complex_no num2, complex_no* res);

/**
 * @brief subtracting utility
 * 
 * @param num1 
 * @param num2 
 * @param res 
 * @return errno_t 
 */
errno_t subtract(complex_no num1, complex_no num2, complex_no* res);

/**
 * @brief divide utility
 * 
 * @param num1 
 * @param num2 
 * @param res 
 * @return errno_t 
 */
errno_t divide(complex_no num1, complex_no num2, complex_no* res);

/**
 * @brief multiply utility
 * 
 * @param num1 
 * @param num2 
 * @param res 
 * @return errno_t 
 */
errno_t multiply(complex_no num1, complex_no num2, complex_no* res);

#endif

