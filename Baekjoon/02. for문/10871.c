//10871 X보다 작은 수
#include <stdio.h>

int main(void){
    int n,x;
    int num;
    scanf("%d %d", &n,&x);
    
    for (int i=1;i<=n;i++){
        scanf("%d",&num);
        if (num<x)
            printf("%d ",num);
    }
    return 0;
}
