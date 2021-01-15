#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    int n=0;
    fgets(input, 101, stdin);
    scanf("%d", &n);
    for(int i=0; i<strlen(input); i++){                 //一個字母一個字母看
        if(input[i] >= 'A' && input[i]<='Z'){           //如果是大寫
            printf("%c", (input[i]-'A'+n)%26 + 'A');    //往後推移n位後，再印出 
        }                                               //怕推移後不在大寫字母的範圍，所以%26取餘數後再加上A，這樣如果推移後超過大寫的範圍會自動回到A繼續循環
        else if(input[i] >= 'a' && input[i]<='z'){      //換小寫
            printf("%c", (input[i]-'a'+n)%26 + 'a');
        }
        else if(input[i] >= '0' && input[i]<='9'){      //It's 數字's turn
            printf("%c", (input[i]-'0'+n)%10 + '0');
        }
        else printf("%c", input[i]);                    //數字和字母以外的直接印不用處理
    }
    return 0;
}
