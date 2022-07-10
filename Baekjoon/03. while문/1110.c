//1110 더하기 사이클
#include <stdio.h>
int main(void)
{
    int n,a,b,x,new;
    int cnt=0;
    scanf("%d",&n);
    x=n;
    while(1){
        b=x%10;
        if (x<10) a=0;
        else a=x/10;
        new = b*10 + (a+b)%10;
        cnt += 1;
        if (new==n){
            printf("%d",cnt);
            break;
        }
        x=new;
    }
    return 0;
}
