#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[10];
    char nums[5][51]={"*****    ************   **************************",     //將初始化題目要的數字陣列
                      "*   *    *    *    **   **    *        **   **   *",
                      "*   *    **************************    ***********",
                      "*   *    **        *    *    **   *    **   *    *",
                      "*****    ***********    ***********    ******    *"};
    while(scanf("%s",input)!=EOF){
        for(int line=0; line<5; line++){            //一層一層印
            for(int i=0; i<4; i++){                 
                int j,n;
                if(input[i]=='0')j=0;               //找需要印出的數字對應num中的哪個位置
                else if(input[i]=='1')j=5;          //ex. 數字1對應num陣列第5~9的位置；數字2對應10~14
                else if(input[i]=='2')j=10;         //以此類推，j為起始位置
                else if(input[i]=='3')j=15;
                else if(input[i]=='4')j=20;
                else if(input[i]=='5')j=25;
                else if(input[i]=='6')j=30;
                else if(input[i]=='7')j=35;
                else if(input[i]=='8')j=40;
                else if(input[i]=='9')j=45;
                n = j+5;                            //n為結束位置，一個數字陣列佔5格所以往後推5
                for( ; j<n; j++){
                    printf("%c",nums[line][j]);     //印出當層數字對應的*，line表示當前層數、i表示當前數字
                }
                if(i==3) printf("\n");              //若是印到第四個數字要換行
                else printf(" ");                   //不是第四個數字的話以空格將數字之間分開
            }
        }
    }
    return 0;
}
