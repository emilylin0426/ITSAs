#include <stdio.h>

int func(int n){                        //func遞迴函式
    if(n == 0 || n == 1)return n+1;     //根據題目給的公式，當n=1或2時回傳n+1
    else if(n>1){                       //當n>1，f(n)=f(n-1)+f(n/2)
        return func(n-1) + func(n/2);
    }
}

int main(){
    int input;
    while(scanf("%d", &input)!=EOF){
        printf("%d\n", func(input));    //印出結果
    }
    return 0;
}
