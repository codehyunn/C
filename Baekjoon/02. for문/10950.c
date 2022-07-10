//10950 A+B-3
#include <stdio.h>

int main(void){
    int a, b, t, i;
    scanf("%d",&t); /*scanf & 조심*/

    for (i=0 ; i<t ; i++){
        scanf("%d %d",&a,&b);
        printf("%d\n", a+b);
    }
    
    return 0;
}
