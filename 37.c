#include <stdio.h>

int main(){
    int dice[4], i;
    for(i=0; i<4; i++){
        scanf("%d", &dice[i]);
    }
    if(dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[3])printf("WIN\n");
    else if(dice[0] == dice[1]){
        if((dice[1] == dice[2] && dice[2]!=dice[3]) || (dice[1] == dice[3] && dice[2]!=dice[3]))printf("R\n");
        else if(dice[2] == dice[3]){
            if(dice[0] > dice[2])printf("%d\n", 2*dice[0]);
            else printf("%d", 2*dice[2]);
        }
        else printf("%d\n", dice[2] + dice[3]);
    }
    else if(dice[0] == dice[2]){
        if((dice[1] == dice[2] && dice[2]!=dice[3]) || (dice[2] == dice[3] && dice[1]!=dice[3]))printf("R\n");
        else if(dice[1] == dice[3]){
            if(dice[0] > dice[1])printf("%d\n", 2*dice[0]);
            else printf("%d", 2*dice[1]);
        }
        else printf("%d\n", dice[1] + dice[3]);
    }
    else if(dice[0] == dice[3]){
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
    else printf("R\n");
    return 0;
}