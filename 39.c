#include <stdio.h>

int main(){
    int cnt, i, score[3];
    scanf("%d", &cnt);
    for(i=0; i<cnt; i++){
        scanf("%d %d %d", &score[0], &score[1], &score[2]);                                             
        if(score[0]>=60 && score[1]>=60 && score[2]>=60)printf("P\n");                                      //如果三個分數都及格，就Pass
        else if(score[0]<60 && score[1]<60 && score[2]<60)printf("F\n");                                    //如果都不及格，當然Fail
        else if(score[0]<60){                                                                               //如果其中一科score[0]不及格
            if(score[1]>=60 && score[2]>=60 && score[0]+score[1]+score[2]>=220)printf("P\n");               //再看如果三科只有一科不及格而且總分>220，也Pass
            else if(score[1]>=60 && score[2]>=60 && score[0]+score[1]+score[2]<220)printf("M\n");           //但如果總分不到220，可以補考啦
            else if((score[1]<60 && score[2]>=80) || (score[2]<60 && score[1]>=80))printf("M\n");           //如果兩科不及格，但剩下一顆有80，也可以補考啦
            else printf("F\n");                                                                             //剩下的我也救不了，先跟你say goodbye，印出Fail
        }
        else if(score[1]<60){                                                                               //重複只是這次看的是如果score[1]不及格的話
            if(score[0]>=60 && score[2]>=60 && score[0]+score[1]+score[2]>=220)printf("P\n");
            else if(score[0]>=60 && score[2]>=60 && score[0]+score[1]+score[2]<220)printf("M\n");
            else if((score[0]<60 && score[2]>=80) || (score[2]<60 && score[0]>=80))printf("M\n");
            else printf("F\n");
        }
        else if(score[2]<60){                                                                               //從score[2]看
            if(score[1]>=60 && score[0]>=60 && score[0]+score[1]+score[2]>=220)printf("P\n");
            else if(score[1]>=60 && score[0]>=60 && score[0]+score[1]+score[2]<220)printf("M\n");
            else if((score[1]<60 && score[0]>=80) || (score[0]<60 && score[1]>=80))printf("M\n");
            else printf("F\n");
        }                                                                                                   //看完啦
    }
    return 0;
}
