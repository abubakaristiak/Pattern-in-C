#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k=1;
    for(int i=n; i>=1; i--){
        for(int j=k; j<=i; j++){
            printf("%d ",j);
        }
        // k--;
        printf("\n");

    }
    return 0;
}


