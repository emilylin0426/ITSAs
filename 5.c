#include <stdio.h>

int main(){
    int input, output[8]={0}, i;
    while(scanf("%d", &input)!=EOF){
        if(input<0){
            output[0] = 1;
            input += 256;
        }
        //printf("enter\n");
        for(i=7; i>0; i--){
            output[i] = input % 2; 
            input /= 2;
        }
        
        for(i=0; i<7; i++){
            printf("%d", output[i]);
        }
        printf("%d\n", output[i]);
    }
    return 0;
}