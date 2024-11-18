#include <stdio.h>

int main(){

    char name []; //1 byte? string of characters
    int age;

    printf("\nWhat's your name? ");
    scanf("%s[25]",&name); //precede variable with'&',it is address of operator

    printf("\nHow old are you? ");
    scanf("%d",&age); //precede variable with'&',it is address of operator
    
    printf("\nYou are %d years old.\n",age);
    printf("\nYour name is %.25s.\n",name);

    return 0;
}


