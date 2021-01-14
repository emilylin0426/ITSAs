#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    int n=0;
    //scanf("%s", input);
    fgets(input, 101, stdin);
    scanf("%d", &n);
    for(int i=0; i<strlen(input); i++){
        if(input[i] >= 'A' && input[i]<='Z'){
            printf("%c", (input[i]-'A'+n)%26 + 'A');
        }
        else if(input[i] >= 'a' && input[i]<='z'){
            printf("%c", (input[i]-'a'+n)%26 + 'a');
        }
        else if(input[i] >= '0' && input[i]<='9'){
            printf("%c", (input[i]-'0'+n)%10 + '0');
        }
        else printf("%c", input[i]);
    }
    return 0;
}