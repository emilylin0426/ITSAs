#include <stdio.h>

int main(){
    int dice[4], i;
    for(i=0; i<4; i++){
        scanf("%d", &dice[i]);
    }
    if(dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[3])printf("WIN\n");                                  //如果四顆點數一樣就通殺
    else if(dice[0] == dice[1]){                                                                                        //接下來固定兩顆骰子
        if((dice[1] == dice[2] && dice[2]!=dice[3]) || (dice[1] == dice[3] && dice[2]!=dice[3]))printf("R\n");          //如果有三顆點數一樣且第四顆點數不一樣 就印出R
        else if(dice[2] == dice[3]){                                                                                    //如果剩下兩顆也一樣點數
            if(dice[0] > dice[2])printf("%d\n", 2*dice[0]);                                                             //就比大小
            else printf("%d", 2*dice[2]);                                                                               //當然要算大的阿
        }
        else printf("%d\n", dice[2] + dice[3]);                                                                         //阿如果到這裡表示前面兩顆一樣點數、另外兩顆都不一樣點數
    }                                                                                                                   //分數計算就是兩顆不一樣的點數和
    else if(dice[0] == dice[2]){                                                                                        //接下來就是重複了
        if((dice[1] == dice[2] && dice[2]!=dice[3]) || (dice[2] == dice[3] && dice[1]!=dice[3]))printf("R\n");          //C4取2有六種，所以每次固定兩顆總共六個else if
        else if(dice[1] == dice[3]){                                                                                    //重複剛剛的動作
            if(dice[0] > dice[1])printf("%d\n", 2*dice[0]);
            else printf("%d", 2*dice[1]);
        }
        else printf("%d\n", dice[1] + dice[3]);
    }
    else if(dice[0] == dice[3]){                                                                                        //重複，所以可以跳到最後了
        if((dice[0] == dice[2] && dice[2]!=dice[1]) || (dice[0] == dice[1] && dice[2]!=dice[1]))printf("R\n");
        else if(dice[2] == dice[1]){
            if(dice[0] > dice[2])printf("%d\n", 2*dice[0]);
            else printf("%d", 2*dice[2]);
        }
        else printf("%d\n", dice[2] + dice[1]);
    }
    else if(dice[1] == dice[2]){
        if((dice[1] == dice[0] && dice[2]!=dice[3]) || (dice[1] == dice[3] && dice[2]!=dice[0]))printf("R\n");
        else if(dice[0] == dice[3]){
            if(dice[0] > dice[2])printf("%d\n", 2*dice[0]);
            else printf("%d", 2*dice[2]);
        }
        else printf("%d\n", dice[0] + dice[3]);
    }
    else if(dice[1] == dice[3]){
        if((dice[1] == dice[2] && dice[2]!=dice[0]) || (dice[1] == dice[0] && dice[2]!=dice[3]))printf("R\n");
        else if(dice[2] == dice[0]){
            if(dice[0] > dice[1])printf("%d\n", 2*dice[0]);
            else printf("%d", 2*dice[1]);
        }
        else printf("%d\n", dice[2] + dice[0]);
    }
    else if(dice[2] == dice[3]){
        if((dice[1] == dice[2] && dice[2]!=dice[0]) || (dice[0] == dice[2] && dice[1]!=dice[3]))printf("R\n");
        else if(dice[0] == dice[1]){
            if(dice[0] > dice[2])printf("%d\n", 2*dice[0]);
            else printf("%d", 2*dice[2]);
        }
        else printf("%d\n", dice[0] + dice[1]);
    }
    else printf("R\n");                                                                                                 //沒提到的狀況就是無法計算，印出R
    return 0;
}
