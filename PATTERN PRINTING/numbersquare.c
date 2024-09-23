#include<stdio.h>
int main(){
    int n;
    printf("enter the number ");

    scanf("%d",&n);

    // int m;
    // printf("Ente rthe number of coloumns:");
    // scanf("%d",&m);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}