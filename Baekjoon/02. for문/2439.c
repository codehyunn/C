//2439 별 찍기 - 2
#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++) // i번째 줄에는 n-i개의 빈칸 다음에-
            printf(" ");
        
        for (int j=1;j<=i;j++) // i개의 별이 찍힘
            printf("*");
        printf("\n"); // 한줄 완성 후 줄바꿈
    }

    return 0;
}
