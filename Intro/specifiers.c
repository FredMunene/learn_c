#include <stdio.h>
//format specifiers- defines and formats a type of data to be displayed.

int main(){

    //prices of items  at a shop
    float item1 = 15.5;
    float item2 = 0.55;
    float item3 =798.987;

    printf ("Price of Item 1 is $%.2f\n",item1); //decimal precision
    printf ("Price of Item 2 is $%6.3f\n",item2); // minimum field width
    printf ("Price of Item 3 is $%-4f\n",item3); // left align


    return 0;
    
}