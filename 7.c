#include <stdio.h>

int main(){
    int cnt, i;
    char opr;
    int a1=0, b1=0, a2=0, b2=0;
    scanf("%d", &cnt);
    for(i=0; i<cnt; i++){
        scanf(" %c%d%d%d%d",&opr, &a1, &b1, &a2, &b2);
        if(opr == '+'){
            printf("%d %d\n", a1+a2, b1+b2);
        }
        else if(opr == '-'){
            printf("%d %d\n", a1-a2, b1-b2);
        }
        else if(opr == '*'){
            printf("%d %d\n", a1*a2 - b1*b2, a1*b2 + b1*a2);
        }
    }
    return 0;
}