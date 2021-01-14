#include <stdio.h>

int main(){
    double input;
    while(scanf("%lf", &input)!=EOF){
        printf("%.1lf\n", input*1.6);
    }
    return 0;
}