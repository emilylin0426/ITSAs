#include <stdio.h>
#include <string.h>

int main(){
    char ans[5], guess[5];
    scanf("%s", ans);
    scanf("%s", guess);
    int i;
    while(strcmp(guess, "0000")!=0){                //如果輸入0000結束
        int a=0, b=0;                               //初始化猜測結果
        for(i=0; i<4; i++){
            if(guess[i]==ans[i])a++;                //如果猜的數字所在的位置和答案一樣，則A++
            else if(strchr(ans, guess[i]))b++;      //若同個位置的數字不一樣，再看是否有出現在答案字串中，若有表示有此數字但位置不對，所以B++
        }
        printf("%dA%dB\n", a, b);                   //印出處理結果
        scanf("%s", guess);                         //更新目前猜測數字組
    }
    return 0;
}
