#include <stdio.h>

int main(){
    int month;
    while(scanf("%d", &month)!=EOF){
        if(month >=3 && month <=5)printf("Spring\n");                           //如果是3~5月，就是春天
        else if(month >=6 && month <= 8)printf("Summer\n");                     //6~8是夏天
        else if(month >=9 && month <= 11)printf("Autumn\n");                    //以此類推
        else if(month == 12 || month == 1 || month == 2)printf("Winter\n");     //每三個月一個季節ㄛ
    }
    return 0;
}
