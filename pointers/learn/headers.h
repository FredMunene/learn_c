#include <stdio.h>
#include <string.h>

// int readFile(const char *filename, struct Person *persons, int maxPersons);

struct Person
{
    char name[50];
    int id;
    float height;
};

struct Record
{
    int id;
    int userid;
    char surname[50];
};

