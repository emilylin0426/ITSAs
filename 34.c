#include <stdio.h>

int main(){
    int gender;
    float height;
    while(scanf("%f %d", &height, &gender)!=EOF){
        if(gender == 1)printf("%.1f\n", (height-80)*0.7 );
        else if(gender == 2)printf("%.1f\n", (height-70)*0.6);
    }
    return 0;
}