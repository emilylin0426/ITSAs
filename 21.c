#include <stdio.h>

int main(){
    double nums[10];
    double max, min;
    scanf("%lf", &nums[0]);
    max = nums[0];
    min = nums[0];
    for(int i=1; i<10; i++){
        scanf("%lf", &nums[i]);
        if(nums[i] > max)max = nums[i];
        if(nums[i] < min)min = nums[i];
    }
    printf("maximum:%.2lf\nminimum:%.2lf\n", max, min);
    return 0;
}