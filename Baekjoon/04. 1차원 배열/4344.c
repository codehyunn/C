//4344 평균은 넘겠지
#include <stdio.h>
int main(void){
    int c;
    scanf("%d",&c);

    for (int i=0;i<c;i++){ //테스트 케이스 수만큼 반복
        int n;
        scanf("%d",&n);

        int scores[n], sum=0;
        for (int j=0;j<n;j++){ //n개 점수 입력
            scanf("%d",&scores[j]);
            sum += scores[j];
        }

        double avg=sum/n;
        int stds=0;
        for (int k=0;k<n;k++){ //점수들과 평균값 비교
            if (scores[k]>avg){
                stds++; //평균보다 높은 경우 stds 값 갱신
            }
        }

        double p=((double)stds/n)*100; //double형 반환 위해 stds의 형 변환
        printf("%.3lf%%\n",p);
    }
    return 0;    
}
