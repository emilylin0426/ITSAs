#include <stdio.h>

int main(){
    int cnt, i, score[3];
    scanf("%d", &cnt);
    for(i=0; i<cnt; i++){
        scanf("%d %d %d", &score[0], &score[1], &score[2]);
        if(score[0]>=60 && score[1]>=60 && score[2]>=60)printf("P\n");
        else if(score[0]<60 && score[1]<60 && score[2]<60)printf("F\n");
        else if(score[0]<60){
            if(score[1]>=60 && score[2]>=60 && score[0]+score[1]+score[2]>=220)printf("P\n");
            else if(score[1]>=60 && score[2]>=60 && score[0]+score[1]+score[2]<220)printf("M\n");
            else if((score[1]<60 && score[2]>=80) || (score[2]<60 && score[1]>=80))printf("M\n");
            else printf("F\n");
        }
        else if(score[1]<60){
            if(score[0]>=60 && score[2]>=60 && score[0]+score[1]+score[2]>=220)printf("P\n");
            else if(score[0]>=60 && score[2]>=60 && score[0]+score[1]+score[2]<220)printf("M\n");
            else if((score[0]<60 && score[2]>=80) || (score[2]<60 && score[0]>=80))printf("M\n");
            else printf("F\n");
        }
        else if(score[2]<60){
            if(score[1]>=60 && score[0]>=60 && score[0]+score[1]+score[2]>=220)printf("P\n");
            else if(score[1]>=60 && score[0]>=60 && score[0]+score[1]+score[2]<220)printf("M\n");
            else if((score[1]<60 && score[0]>=80) || (score[0]<60 && score[1]>=80))printf("M\n");
            else printf("F\n");
        }
    }
    return 0;
}