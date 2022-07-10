//8958 OX퀴즈
#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        char test[80];
        int o_num=0, score=0, j=0;
        scanf("%s",test);

        while (test[j] != '\0'){ 
            if (test[j]=='O') o_num++; //O이면 개수 증가
            else o_num=0; //아니면 0으로 초기화
            score += o_num; //각 문자의 점수(O 개수) 더하기
            j++;
        }
        printf("%d\n",score);
    }
    return 0;
}
