#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * @file Utilities.h
 * @author Prakhar Rastogi -256102 (prkharrastogi99.pr@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __UTILITIES_H_
#define __UTILITIES_H_ 

/**
 * @brief Defined flags to get and handle errors
 * 
 */
typedef enum error_handler{
    NO_FILE = 1,
    OK = 0,
} error_handler;

/**
 * @brief Defining Structure Format
 * 
 */
typedef struct info_t {
    char name[1000];
    char email_id[1000];
    char git_link[1000];
} info_t;

/**
 * @brief File opening utility
 * 
 * @param fileaddr // file input
 * @param mode     // mode of file reading,writing,append,etc.
 * @param fptr     // storing file pointer
 * @return error_handler 
 */
error_handler fileOpenUtil(char *fileaddr,char *mode, FILE **fptr);

/**
 * @brief File reading utility
 * 
 * @param fptr 
 * @param buffer // to store the file data line by line
 * @return int 
 */
int fileReadUtil(FILE **fptr, char *buffer);

/**
 * @brief Memory freeing utility, to free up dynamically allocated space.
 * 
 * @param user 
 */
void freeMemoryUtil(info_t *user);


/**
 * @brief Sorting Utitlity
 * 
 * @param arr 
 */
void sortUtil(info_t *arr);

#endif