//2577 숫자의 개수
#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    int n=a*b*c;
    int arr[10]={0}; //arr[i]=숫자에서 i 개수 
    while (n>=1){ 
        arr[n%10] += 1; //일의자리수를 확인
        n/=10; //n을 10으로 나누기
    }

    for (int i=0;i<10;i++) printf("%d\n",arr[i]);
    return 0;
}
