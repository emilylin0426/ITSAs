#include <stdio.h>

int main(){
    int hour_in, min_in;
    int hour_out, min_out;
    int cost;
    while(scanf("%d %d", &hour_in, &min_in)!=EOF){
        scanf("%d %d", &hour_out, &min_out);
        int time;                                                               
        if(min_out - min_in < 0){
            min_out += 60;                                                      //如果分鐘不夠減，跟小時借1
            hour_out--;
        }
        time = (hour_out - hour_in)*60 + (min_out - min_in);                    //總停車分鐘數
        if(time <= 120)printf("%d\n", (time/30) * 30 );                         //如果停不到兩小時，每半小時30塊
        else if(time <= 240){                                                   //如果停2~4小時，前兩小時120塊，後面看停多久每半小時40塊
            cost = 120 + ( (time-120)/30 ) * 40;
            printf("%d\n", cost);
        }
        else {                                                                  //超過4小時的部分，每小時60塊
            cost = 120 + 160 + ( (time-240)/30 ) * 60;                          //根本搶錢
            printf("%d\n", cost);                                               //這比台北市中心停車費還貴吧
        }
    }
    return 0;
}
