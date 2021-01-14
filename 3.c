#include <stdio.h>

int main(){
    int x,y;
    while(scanf("%d %d", &x, &y)!=EOF){
        if( (x*x) + (y*y) > (100*100) )printf("outside\n");
        else printf("inside\n");
    }
    return 0;
}