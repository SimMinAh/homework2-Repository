#include <stdio.h>
int main()
{
    printf("[----- [simmina] [2022041070] -----]\n");
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("Size of char: %ld byte\n",sizeof(charType)); //char 형인 charType의 크기
    printf("Size of int: %ld bytes \n",sizeof(integerType)); //int 형인 integerType의 크기
    printf("Size of flot: %ld bytes\n",sizeof(floatType)); //float 형인 floatType의 크기
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double 형인 doubleType의 크기
    printf("--------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char)); //char라는 자료형의 크기
    printf("Size of int: %ld bytes \n",sizeof(int)); //int라는 자료형의 크기
    printf("Size of float: %ld bytes\n",sizeof(float)); //float라는 자료형의 크기
    printf("Size of double: %ld bytes\n",sizeof(double)); //double라는 자료형의 크기
    printf("--------------------------------------\n");
    
    printf("Size of char*: %ld byte\n", sizeof(char*)); //포인터의 크기
    printf("Size of int* : %ld bytes\n",sizeof(int*)); //포인터의 크기
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //포인터의 크기
    printf("Size od double*: %ld bytes\n",sizeof(double*)); //포인터의 크기

    return 0;
}