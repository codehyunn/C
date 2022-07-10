//2562 최댓값
#include <stdio.h>
int main(void){
    int arr[9];
    for (int i=0;i<9;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0], idx=1; //max=arr[0]이면 max가 첫번째 수니까 idx=1
    for (int j=1;j<9;j++){
        if (max<arr[j]){
            max=arr[j];
            idx=j+1;
        } 
    }
    
    printf("%d\n%d",max,idx);
    return 0;   
}
