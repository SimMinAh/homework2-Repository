#include <stdio.h>
int main(){
    printf("[----- [simmina] [2022041070] -----]\n");
    int i;
    int*ptr;
    int**dptr;
    i=1234;

    printf("[chaecking values before ptr=&i]\n");
    printf("vlaue of i == %d\n",i); //i의 값 출력
    printf("address of i == %p\n",&i); //i의 주소 출력
    printf("value of ptr == %p\n",ptr); //ptr의 값 출력(없으니까 0)
    printf("address of ptr == %p\n",&ptr); //ptr의 주소 출력

    ptr=&i; //ptr에 i의 주소를 가리킴
    printf("\n[checking values after ptr = &i]\n"); 
    printf("value of i == %d\n",i); //i의 값 출력
    printf("address of i == %p\n",&i); //i의 주소 출력
    printf("value of ptr == %p\n",ptr); //ptr이 가리키는 i의 주소 출력
    printf("address of ptr == %p\n",&ptr); //ptr의 주소 출력
    printf("value of *ptr == %d\n",*ptr); //ptr이 가리키는 i가 가진 값 출력

    dptr=&ptr; //dptr이 ptr의 주소를 가리킴
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); //i의 값 출력
    printf("address of i == %p\n", &i); //i의 주소 출력
    printf("value of ptr == %p\n", ptr); //ptr이 가리키는 i의 주소 출력
    printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 i가 가진 값 출력
    printf("value of dptr == %p\n", dptr); // dptr이 가리키는 ptr의 주소 출력
    printf("address of dptr == %p\n", &dptr); //dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr); //*dptr = ptr = &i, 즉 i의 주소 값 출력
    printf("value of **dptr == %d\n", **dptr); //**dptr = *ptr = i의 값 출력

    *ptr = 7777; //ptr이 가리키는 주소, 즉 i에 7777을 넣음
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); //i의 값 출력
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 i가 가진 값 출력
    printf("value of **dptr == %d\n", **dptr); //**dptr = *ptr = i의 값 출력

    **dptr = 8888; //*dptr = ptr이 가리키는 주소, 즉 i에 8888을 넣음
    printf("\n[after **dptr = 8888] \n"); 
    printf("value of i == %d\n", i); //i의 값 출력 
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 i가 가진 값 출력
    printf("value of **dptr == %d\n", **dptr); //**dptr = *ptr = i의 값 출력
    return 0;
}