#include "Utilities.h"

int main(){
    FILE *ftr=NULL;
    error_handler open=fileOpenUtil("data.csv","r", &ftr);
    
    info_t *arr=malloc(sizeof(info_t)*5);
    char buffer[1000]={0}; //to store file data
    
    if(open==NO_FILE){
        printf("FILE CANNOT BE FOUND");
    }
    else{
        int i=0;
    
        while(fileReadUtil(&ftr,buffer)==1){

            if(feof(ftr)){
                printf("END OF FILE IS REACHED\n");
                break;
            }
            info_t *user=(info_t*)malloc(sizeof(user));
            char *temp;       
            temp=strtok(buffer,",");
            strcpy(user->name,temp);
            temp=strtok(NULL,",");
            strcpy(user->email_id,temp);
            temp=strtok(NULL,",");
            strcpy(user->git_link,temp);


            printf(" Name: %s\n Email_Address: %s\n GitHub_Link: %s\n\n",user->name,user->email_id,user->git_link);

            strcpy(arr[i].name,user->name);
            strcpy(arr[i].email_id,user->email_id);
            strcpy(arr[i].git_link,user->git_link);

            i++;
            freeMemoryUtil(user);
        }

        sortUtil(arr);
        printf("NOW AFTER SORTING:\n\n");
        for(int i=0;i<5;i++){
            printf(" Name: %s\n Email_Address: %s\n GitHub_Link: %s\n",arr[i].name,arr[i].email_id,arr[i].git_link);
        }
    }
    freeMemoryUtil(arr);
    fclose(ftr);
    return 0;
}