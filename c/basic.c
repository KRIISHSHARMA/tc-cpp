#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> // to use "true" or "false"
int main()
{
    int i = 0; //decleration
    printf("i=%d\n",i);

    i=5;//assignment
    printf("i=%d\n",i);

    i=-3;
    printf("i=%d\n",i);

    i=3.5; // 3.5 converted to 3
    printf("i=%d\n",i);

    double d1 = 3.5 ; //better and more precise than float
    printf("d1=%1f\n",d1);

    char c = 'A'; // not a string ""
    printf("%c\n",c);

    int code ='A';
    printf("%d\n",code);

    char na[] = "yfuycyihu"; //group of char
    printf("%s\n",na);

    // how to know how much a variable can hold
    int x = sizeof(int);
    printf("number of bytes of an int : %d bytes \n",x);
    printf("no of bits : 4x8=32 bits \n");
    printf("we can store 2^32 in an integer");

    return 0;
}