#include "headers.h"

int main(){

const char *RECORDS = "records.txt";

struct  Record r;
struct Record cr;
char userName[50];

FILE *pf = fopen(RECORDS, "a+");

// Read last id from the file

// int lastId = -1;
int result = getLastId(pf);

// while((result = fscanf(pf, "%d %*d %*s\n", &lastId)) == 1){

// }

// set the new id
// r.id = lastId +1;

r.id = result;
printf("What is your name? ");
scanf("%s", r.surname);

printf("\nWhat is your id? ");
scanf("%d", &r.userid);

strcpy(userName,r.surname);

fprintf(pf,"%d %d %s\n\n", r.id,r.userid,r.surname);

fclose(pf);
return 0;
}


void saveToFile(FILE *ptr, struct  Person u, struct Record r){

  fprintf(ptr, "%d %d %s\n\n",u.id,r.id,u.name);
  
}

int getAccountFromFile(FILE *ptr, char name[50], struct Record *r){
  return fscanf(ptr, "");
}



int getLastId(FILE *ptr)
{
  struct Person p;
  struct  Record r;
  int lastId = -1;

  while (fscanf(ptr, "%d %d %s", 
  &p.id,
  &r.userid,
  p.name
  )==3){
    lastId = r.userid;
  }

  return lastId;
  
}

























// int main(){
//     // DEclare a struct and initialize it
//     struct  Person person1 = {"Alice",25,165.5};
//     // Declare a pointer to a struct
    
//     struct Person *ptr;

//     // assign pointer to Person1

//     ptr = &person1;
    
//     // accessing struct members theough the pointer
   
//     printf("person's name %s\n", ptr -> name);
//     printf("person's age %d\n", ptr -> id);
//     printf("person's height %1f\n", ptr -> height);


//     // modify age through pointer

//     ptr -> id = 20;

//      printf("person's age %d\n", person1.id);
//      printf("person's age %d\n", ptr -> id);

//    return 0;
// }









