#include <stdio.h>

int main(){
    double nums[10];
    double max, min;
    scanf("%lf", &nums[0]);
    max = nums[0];                              //讀入第一個數字，預設max&min皆為第一個數字
    min = nums[0];
    for(int i=1; i<10; i++){
        scanf("%lf", &nums[i]);                 //讀入剩下的數字
        if(nums[i] > max)max = nums[i];         //若讀進的數字大於目前max值則更新
        if(nums[i] < min)min = nums[i];         //同理若小於min也更新
    }
    printf("maximum:%.2lf\nminimum:%.2lf\n", max, min);
    return 0;
}
