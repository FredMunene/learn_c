// importing standard library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// defining structs

struct User
{
    int id;
    char name[50];
    char password[50];
};
// Function prototype

int checkUserFromFile(FILE *pt, const char *r);