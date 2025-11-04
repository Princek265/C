#include<stdio.h>

int main(){
    int n;
    printf("Enter size or array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        // printf("%d ",a[i]);
        sum+=a[i];
    }
    printf( "Sum : %d",sum);


    return 0;
}