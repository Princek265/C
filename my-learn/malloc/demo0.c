#include<stdio.h>
#include<stdlib.h>
int main(){

    int n =10;
    int *p = (int*)malloc(sizeof(int)); // store in Heap

    *p =20;
    printf("n= %d",*p);
    printf("\np= %d",*p);

    free(p);

    return 0;
}