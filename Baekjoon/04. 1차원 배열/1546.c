//1546 평균
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    
    double scores[n],sum=0, new;
    int m=0;
    for (int i=0;i<n;i++){ //점수 입력
        scanf("%lf",&scores[i]);
        if (scores[i]>m) m=scores[i]; //최고점(m) 찾기
    }
    
    for (int j=0;j<n;j++){ 
        new = (scores[j]/m)*100; //실수 계산을 위해 arr의 자료형 변환(정수>>실수)
        sum += new;
    }

    printf("%lf\n", sum/n);
    return 0;
}
