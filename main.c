#include "header.h"

char *USERS = "./users.txt";

// declare 

int main(){
    // declare a pointer to a 'FILE' object
    // file opened in write mode and reading.
    struct User newRecord;
   
    system("clear");
    printf("\n\n\n\t\t\t Bank Management System\n\t\t\t Registration\n\t\t\t\t\t Username: ");
    scanf("%s",newRecord.name);
    // check name is unique
    FILE *ptr = fopen(USERS, "r");
    if (ptr  == NULL) {

         printf("Failed to open the file");
        return 1;

    }

    if (checkUserFromFile(ptr,newRecord.name)){
        printf("The user with the name '%s' is already registered\n",newRecord.name);
    fclose(ptr);
        return 1;
    }

    fclose(ptr);

    printf("\n\n\n\n\t\t\t\t\t  Id: ");
    scanf("%d",&newRecord.id);

    printf("\n\n\n\n\t\t\t\t\t  Password: ");
    scanf("%s",newRecord.password);

  FILE *pf = fopen(USERS, "a+");

    if (pf == NULL) {
        printf("Failed to open the file");
        return 1;
    }
    

    // write details to file

    fprintf(pf,"%d %s %s\n",newRecord.id,newRecord.name,newRecord.password);

    // Read and print contents of the file

    rewind(pf);
    char buffer[100];
    while(fgets(buffer, sizeof(buffer), pf) != NULL) {
        printf("%s", buffer);
    }

    // close the file
    fclose(pf);
    return 0;

}

int checkUserFromFile(FILE *pt,const char *r){

    char line[50];
    while (fgets(line,sizeof(line),pt) != NULL) {
        // Assume name is second field everytime
        char *token = strtok(line, " "); // returns the first token
        token = strtok(NULL, " "); // use of strtok to move to second token

        if (token != NULL && strcmp(token, r) == 0){
           // fclose(pt);
            return 1; // name found
        }
    } 

   // fclose(pt);
    return 0; // name not found
}
