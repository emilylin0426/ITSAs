#include <stdio.h>

int main(){
    int cnt, i;
    scanf("%d", &cnt);
    int total, employee, gift;
    for(i=0; i<cnt; i++){
        scanf("%d %d %d", &total, &employee, &gift);
        int cost[gift];                             //存每個禮物的花費，總共有gift個禮物
        for(int j=0; j<gift; j++){
            scanf("%d", &cost[j]);
        }
        for(int k=0; k<gift; k++){                  //對禮物的價錢做排序
            for(int l=0; l<gift-k-1; l++){          //價錢低到價錢高
                if(cost[l]>cost[l+1]){              //bubble sort最好寫:)
                    int tmp;
                    tmp = cost[l];
                    cost[l] = cost[l+1];
                    cost[l+1] = tmp;
                }
            }
        }
        int sum=0;
        for(int m=0; m<employee; m++){              //有幾個員工就把前幾個價錢低的禮物錢加起來
            sum += cost[m];
        }
        if(sum <= total){                           //如果加完沒超過預算就買
            printf("%d\n", sum);
        }
        else printf("Impossible\n");                //超過預算就買不了禮物
    }                                               //幫員工QQ
    return 0;
}
