#include <stdio.h>

int main(){
    int input, output[8]={0}, i;
    while(scanf("%d", &input)!=EOF){
        if(input<0){                        //如果是負數
            output[0] = 1;                  //二進位的第一碼為1
            input += 256;                   //然後把負的推移成正的
        }
        for(i=7; i>0; i--){                 //一位一位key in(由後往前)
            output[i] = input % 2;          //把十進位轉成2進位
            input /= 2;                     //每除一次2，二進位制就往前一格
        }
        
        for(i=0; i<7; i++){
            printf("%d", output[i]);        //印出結果
        }
        printf("%d\n", output[i]);
    }
    return 0;
}
