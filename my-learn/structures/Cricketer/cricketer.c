#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer
    {
        char name[20];
        int age;
        int test_matches;
        int avg_runs;
    } cricketer;

    cricketer arr[4];

    for(int i=0;i<1;i++){
        printf("Name: ");
        gets(arr[i].name);
        printf("Age: ");
        scanf("%d",&arr[i].age);
        printf("No of Test Matches: ");
        scanf("%d",&arr[i].test_matches);
        printf("Average Runs: ");
        scanf("%d",&arr[i].avg_runs);

    }

    for(int i=0;i<1;i++){
    printf("\n");
    printf("Name: %s\n",arr[i].name);
    printf("Age: %d\n",arr[i].age);
    printf("No of Test Matches: %d\n",arr[i].test_matches);
    printf("Average Runs: %d\n",arr[i].avg_runs);
    }
    return 0;
}