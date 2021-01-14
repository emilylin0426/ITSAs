#include <stdio.h>

int main(){
    int hour_in, min_in;
    int hour_out, min_out;
    int cost;
    while(scanf("%d %d", &hour_in, &min_in)!=EOF){
        scanf("%d %d", &hour_out, &min_out);
        int time;
        if(min_out - min_in < 0){
            min_out += 60;
            hour_out--;
        }
        time = (hour_out - hour_in)*60 + (min_out - min_in);
        if(time <= 120)printf("%d\n", (time/30) * 30 );
        else if(time <= 240){
            cost = 120 + ( (time-120)/30 ) * 40;
            printf("%d\n", cost);
        }
        else {
            cost = 120 + 160 + ( (time-240)/30 ) * 60;
            printf("%d\n", cost);
        }
    }
    return 0;
}