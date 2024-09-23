#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows:");
    scanf("%d",&n);


    int m;
    printf("Enter the coloumn");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){
        for(int J=1;J<=m;J++){
            // printf("*");
            printf("%d  ",J);

        }
        //   printf("%d",i);
        printf("\n");
    }
    return 0;
}