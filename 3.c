#include <stdio.h>

int main(){
    int x,y;
    while(scanf("%d %d", &x, &y)!=EOF){
        if( (x*x) + (y*y) > (100*100) )printf("outside\n");     //如果到原點的距離>元的半徑的話，此點就在外面
        else printf("inside\n");                                //反之點在裡面
    }
    return 0;
}
