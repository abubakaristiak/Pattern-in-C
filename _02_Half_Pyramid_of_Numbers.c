#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=k; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}