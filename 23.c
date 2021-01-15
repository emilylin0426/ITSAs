#include <stdio.h>

int main(){
    int money;
    int apple, orange, peach;
    scanf("%d,%d,%d,%d", &money, &apple, &orange, &peach);
    if( money < apple*15+orange*20+peach*30)printf("0\n");          //若帶的錢不夠付，印出0
    else {
        int change = money - apple*15 - orange*20 - peach*30;       //剩餘零錢
        printf("%d,%d,%d\n", change%5, (change-(50* (change/50) ) )/5, change/50);  //找的1元個數為除5的餘數、5元個數為總零錢-已經換成50塊的部份的錢 再除以5、50元個數直接看除以50的商
    }
    return 0;
}
