//1330 두 수 비교하기
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d",&a,&b);
    if (a>b)
        printf(">"); // 작은따옴표X 큰따옴표O
    else if (a<b)
        printf("<");
    else 
        printf("==");
    return 0; 
}
