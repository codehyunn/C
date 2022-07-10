//3052 나머지
#include <stdio.h>
int main(void)
{
    int arr[10];
    int input;
    for (int i=0;i<10;i++){
        scanf("%d",&input);
        arr[i]=input%42;
    }

    int result=0;
    for (int k=0;k<10;k++){
        int cnt=0; //k번째 수와 같은 수가 존재하는 지 확인하기 위한 변수이므로 매번 0으로 초기화.
        for (int j=k+1;j<10;j++){
            if (arr[k]==arr[j]) cnt++; //같은 수 있을 떄
        }
        if (cnt==0) result++; //같은 수 없을 때
    }
    printf("%d\n",result);
    return 0;
}
