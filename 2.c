#include <stdio.h>

int main(){
    double input;
    while(scanf("%lf", &input)!=EOF){
        printf("%.1lf\n", input*1.6);           //將英哩*1.6變成公里後印出到小數點後一位
    }
    return 0;
}
