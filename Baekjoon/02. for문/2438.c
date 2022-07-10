//2438 별 찍기 - 1
#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    
    for (int i=1; i<=n ; i++){ // i는 몇줄 출력인지 
        for (int j=1; j<=i; j++){ // j는 한줄에 몇개 출력인지
            printf("*");
        }
        printf("\n"); // 한줄 완성 후 줄바꿈
    }

    return 0;
}
