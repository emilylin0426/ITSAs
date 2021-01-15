#include <stdio.h>

int main(){
    int n, i;
    while(scanf("%d", &n)!=EOF){
        int ans=0;
        for(i=3; i<=n; i++){
            if(i%3 == 0){           //從3開始，如果遇到3的倍數
                ans += i;           //就累加
            }
        }
        printf("%d\n", ans);        //印出累加的結果
    }
    return 0;
}
