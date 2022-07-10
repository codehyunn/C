//11021 A+B-7
#include <stdio.h>

int main(void){
    int t;
    scanf("%d",&t);

    int a,b;
    for (int i=1;i<t+1;i++){
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d\n",i,a+b);
    }
    
    return 0;
}
