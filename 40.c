#include <stdio.h>

int main(){
    char tmp[10];
    int ISBN[10], i;
    for(i=0; i<10; i++){
        scanf("%s", &tmp[i]);
        if(tmp[i] == 'X'){
            ISBN[i] = 10;
        }
        else ISBN[i] = tmp[i] - '0';
    }
    for(i=0; i<2; i++){
        for(int j=1; j<10; j++){
            ISBN[j] = ISBN[j-1] + ISBN[j];
        }
    } 
    if(ISBN[9]%11 == 0)printf("YES\n");
    else printf("NO\n");
    return 0;
}