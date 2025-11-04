#include <stdio.h>
#include <math.h>
int main(){

    int x, root;
    scanf("%d",&x);
    root=sqrt(x);
    for(int i = 2; i <= root ;++i ){

        if(x%i==0){
            printf("%d is composite",x);
            return 0;
        }
    }
    printf("%d is prime",x);


    return 0;
}