//2884 알람 시계
#include <stdio.h>
int main(void)
{
    int h,m;   
    scanf("%d %d",&h,&m);
    if (m >= 45)
        m -= 45;
    else{
        if (h == 0)
            h = 23;
        else
            h -= 1;
        m += 15;
    }
    printf("%d %d",h,m);
    return 0;
}
