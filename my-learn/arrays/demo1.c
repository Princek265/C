#include <stdio.h>

void fun(int x){
    printf("%d ",--x);
}
int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n],i;
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++) {
        fun(a[i]);
    }
    printf("\nln main\n");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}