#include <stdio.h>

int main(){

    int a, b, temp, num;
    a=0;
    b=1;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("%d\n%d\n",a,b);
    if (num > 2){
        for(int i = 0; i<num-2; ++i){
            temp = a;
            a = b;
            b = temp+b;
            printf("%d\n",b);
        }
    }
    return 0;

}

int fibonacci(int num){
    int a, b, temp;
    a=0;
    b=1;
    return fibonacci(num-1);
}