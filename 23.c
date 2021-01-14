#include <stdio.h>

int main(){
    int money;
    int apple, orange, peach;
    scanf("%d,%d,%d,%d", &money, &apple, &orange, &peach);
    if( money < apple*15+orange*20+peach*30)printf("0\n");
    else {
        int change = money - apple*15 - orange*20 - peach*30;
        printf("%d,%d,%d\n", change%5, (change-(50* (change/50) ) )/5, change/50);
    }
    return 0;
}