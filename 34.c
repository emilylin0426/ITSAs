#include <stdio.h>

int main(){
    int gender;
    float height;
    while(scanf("%f %d", &height, &gender)!=EOF){
        if(gender == 1)printf("%.1f\n", (height-80)*0.7 );          //如果要算的是男生的話，按照男生的公式印出標準體重
        else if(gender == 2)printf("%.1f\n", (height-70)*0.6);      //如果是女生就按照女生的公式印出
    }
    return 0;
}
