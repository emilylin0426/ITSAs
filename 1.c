#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[10];
    char nums[5][51]={"*****    ************   **************************",
                      "*   *    *    *    **   **    *        **   **   *",
                      "*   *    **************************    ***********",
                      "*   *    **        *    *    **   *    **   *    *",
                      "*****    ***********    ***********    ******    *"};
    while(scanf("%s",input)!=EOF){
        for(int line=0; line<5; line++){
            for(int i=0; i<4; i++){
                int j,n;
                //printf("%c\n",input[i]);
                if(input[i]=='0')j=0;
                else if(input[i]=='1')j=5;
                else if(input[i]=='2')j=10;
                else if(input[i]=='3')j=15;
                else if(input[i]=='4')j=20;
                else if(input[i]=='5')j=25;
                else if(input[i]=='6')j=30;
                else if(input[i]=='7')j=35;
                else if(input[i]=='8')j=40;
                else if(input[i]=='9')j=45;
                n = j+5;
                for( ; j<n; j++){
                    printf("%c",nums[line][j]);
                }
                if(i==3) printf("\n");
                else printf(" ");
            }
        }
    }
    return 0;
}