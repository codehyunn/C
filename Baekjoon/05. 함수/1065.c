//1065 한수
#include <stdio.h>
int hs(int i);
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",hs(n));
    return 0;
}

int hs(int i){
    int ans=0;
    for (int j=1;j<=i;j++){
        if (j<100) ans++;
        else{
            int a,b,c;
            a=j/100;
            b=(j%100)/10;
            c=j%10;

            if (a-b==b-c) ans++;
        }
    }
    return ans;
}
