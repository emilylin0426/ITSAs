#include <stdio.h>

int main(){
    int cnt, i;
    char opr;
    int a1=0, b1=0, a2=0, b2=0;
    scanf("%d", &cnt);
    for(i=0; i<cnt; i++){
        scanf(" %c%d%d%d%d",&opr, &a1, &b1, &a2, &b2);
        if(opr == '+'){
            printf("%d %d\n", a1+a2, b1+b2);                    //複數的加法：實部加實部、虛部加虛部
        }
        else if(opr == '-'){                                    //減法：實部減實部、虛部減虛部
            printf("%d %d\n", a1-a2, b1-b2);
        }
        else if(opr == '*'){                                    //實部*實部=虛部*虛部=實數、虛部*實部=虛數
            printf("%d %d\n", a1*a2 - b1*b2, a1*b2 + b1*a2);
        }
    }
    return 0;
}
