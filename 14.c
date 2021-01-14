#include <stdio.h>
#include <string.h>

int palindrome(char input[100]){
    int len= strlen(input)-1;
    int start=0, end=len;
    int palin=1;
    while(start != end && start <= len/2){
        if(input[start] == input[end]){
            start++;
            end--;
        }
        else {
            palin = 0;
            break;
        }
    }
    if(palin == 0)return 0;
    else return 1;
}

int main(){
    char input[100];
    while(scanf("%s", input)!=EOF){
        if(palindrome(input))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}