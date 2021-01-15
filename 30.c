#include <stdio.h>

int main(){
    int month, date;
    while(scanf("%d %d", &month, &date)!=EOF){
        switch(month){                                  //先看月份
            case 1:
                if(date>=21)printf("Aquarius\n");       //再看日期歸類在哪一個星座
                else printf("Capricorn\n");
                break;
            case 2:                                     //土法煉鋼
                if(date>=19)printf("Pisces\n");
                else printf("Aquarius\n");
                break;
            case 3:
                if(date>=21)printf("Aries\n");
                else printf("Pisces\n");
                break;
            case 4:
                if(date>=21)printf("Taurus\n");
                else printf("Aries\n");
                break;
            case 5:
                if(date>=22)printf("Gemini\n");
                else printf("Taurus\n");
                break;
            case 6:
                if(date>=22)printf("Cancer\n");
                else printf("Gemini\n");
                break;
            case 7:
                if(date>=23)printf("Leo\n");
                else printf("Cancer\n");
                break;
            case 8:
                if(date>=24)printf("Virgo\n");
                else printf("Leo\n");
                break;
            case 9:
                if(date>=24)printf("Libra\n");
                else printf("Virgo\n");
                break;
            case 10:
                if(date>=24)printf("Scorpio\n");
                else printf("Libra\n");
                break;
            case 11:
                if(date>=23)printf("Sagittarius\n");
                else printf("Scorpio\n");
                break;
            case 12:
                if(date>=22)printf("Capricorn\n");          //練完ㄌ
                else printf("Sagittarius\n");
                break;
        }
    }
    return 0;
}
