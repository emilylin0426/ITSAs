#include <stdio.h>

int main(){
    int used;
    float summer=0, notsum=0;
    scanf("%d", &used);
    if(used<=120){                                                                                  //如果用電<120度
        summer = used*2.1;                                                                          //夏季和非夏季的錢就是一樣的
        notsum = summer;
    }
    else if(used <= 330){                                                                           //如果超過120但沒超過330度
        summer = 120*2.1 + (used-120)*3.02;                                                         //120度以內的電費先加好加滿
        notsum = 120*2.1 + (used-120)*2.68;                                                         //再算超過120的區間用電
    }
    else if(used <= 500){                                                                           //下個區間電費
        summer = 120*2.1 + (330-120)*3.02 + (used-330)*4.39;                                        //也是先把前面區間的電費加好加滿
        notsum = 120*2.1 + (330-120)*2.68 + (used-330)*3.61;
    }
    else if(used <= 700){
        summer = 120*2.1 + (330-120)*3.02 + (500-330)*4.39 + (used-500)*4.97;                       //以此類推
        notsum = 120*2.1 + (330-120)*2.68 + (500-330)*3.61 + (used-500)*4.01;
    }
    else{
        summer = 120*2.1 + (330-120)*3.02 + (500-330)*4.39 + (700-500)*4.97 + (used-700)*5.63;
        notsum = 120*2.1 + (330-120)*2.68 + (500-330)*3.61 + (700-500)*4.01 + (used-700)*4.5;
    }
    printf("Summer months:%.2f\nNon-Summer months:%.2f\n", summer, notsum);                         //終於算完印出來啦
    return 0;
}
