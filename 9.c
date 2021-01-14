#include <stdio.h>

int main(){
    int n, i;
    while(scanf("%d", &n)!=EOF){
        int ans=0;
        for(i=3; i<=n; i++){
            if(i%3 == 0){
                ans += i;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}