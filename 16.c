#include <stdio.h>
#include <string.h>

int main(){
    char target[129], line[513];
    scanf("%s", target);
    scanf("%s", line);
    char *ptr;
    int cnt=0;
    ptr = line;
    while(ptr = strstr(ptr, target)){
        ptr++;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}