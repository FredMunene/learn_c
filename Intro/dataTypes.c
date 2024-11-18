#include <stdio.h>
#include <stdbool.h> 

int main(){
    // char a = 'C';
    // char b[] = "Bro";

    float c = 3.141592653589793;          // 4 bytes of memory (32bits of precision) 6-7 digits %f
    double d = 3.141592653589793; // 8 bytes (64bits of precision) 15-16 digits %lf
    int j = 2435666; //4 bytes (-2,147,483,648 to +2,147,483,648)
    bool e = true; // 1 byte (true or false) %d

    char f = 100; // 1 byte (-128 to +127) %d . Signed char
    char g = 100; // 1 byte (-128 to +127) %c . signed char
    unsigned char i = 255; // 1 byte (0 to +255) %d or %c -positive integers-

    short int j = 456; //2 bytes (-32768 to +32767)%d
    unsigned short int k = 54000; // 2 byte (0 to 65535) %d
    short n =32767;
    unsigned short m = 65535;

    int o = 4555; // 4 bytes (-2,471,483,648 to 2,471,483,648) % d
    unsigned int p = 123456789; // 4 bytes (4,294,967,295) %u

    long long q = 1234567890867; // 8 bytes (-9 quintillion to 9 quintillion) %lld
    unsigned long long q = 1234567890867; // 8 bytes (-9 quintillion to 9 quintillion) %llu

 


    //printf("\"%d\" converted to char referencing ASCII table \"%c\"\n",f,g);

    // printf("Pie is %f\n",c);
    // printf("Pie is %lf\n",d);
    // printf("Pie is %0.15f\n",c); //0.15 is a format specifier
    // printf("Pie is %0.15lf\n",d);

    return 0;
}
