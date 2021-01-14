#include <stdio.h>

int func(int n){
    if(n == 0 || n == 1)return n+1;
    else if(n>1){
        return func(n-1) + func(n/2);
    }
}

int main(){
    int input;
    while(scanf("%d", &input)!=EOF){
        printf("%d\n", func(input));
    }
    return 0;
}