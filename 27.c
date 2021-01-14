#include <stdio.h>
#include <string.h>

int main(){
    char ans[5], guess[5];
    scanf("%s", ans);
    scanf("%s", guess);
    int i;
    while(strcmp(guess, "0000")!=0){
        int a=0, b=0;
        for(i=0; i<4; i++){
            if(guess[i]==ans[i])a++;
            else if(strchr(ans, guess[i]))b++;
        }
        printf("%dA%dB\n", a, b);
        scanf("%s", guess);
    }
    return 0;
}