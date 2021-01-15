#include <stdio.h>

int main(){
    int year;
    while(scanf("%d", &year)!=EOF){
        if(year%4 == 0){                                        //如果是4的倍數
            if(year%400 == 0)printf("Bissextile Year\n");       //逢400閏
            else if(year%100 == 0)printf("Common Year\n");      //逢100不閏
            else printf("Bissextile Year\n");                   //和100.400無關的話就閏年
        }
        else printf("Common Year\n");                           //不是4的倍數就不是閏年
    }
    return 0;
}
