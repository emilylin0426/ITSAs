#include <stdio.h>

int main(){
    int used;
    float summer=0, notsum=0;
    scanf("%d", &used);
    if(used<=120){
        summer = used*2.1;
        notsum = summer;
    }
    else if(used <= 330){
        summer = 120*2.1 + (used-120)*3.02;
        notsum = 120*2.1 + (used-120)*2.68;
    }
    else if(used <= 500){
        summer = 120*2.1 + (330-120)*3.02 + (used-330)*4.39;
        notsum = 120*2.1 + (330-120)*2.68 + (used-330)*3.61;
    }
    else if(used <= 700){
        summer = 120*2.1 + (330-120)*3.02 + (500-330)*4.39 + (used-500)*4.97;
        notsum = 120*2.1 + (330-120)*2.68 + (500-330)*3.61 + (used-500)*4.01;
    }
    else{
        summer = 120*2.1 + (330-120)*3.02 + (500-330)*4.39 + (700-500)*4.97 + (used-700)*5.63;
        notsum = 120*2.1 + (330-120)*2.68 + (500-330)*3.61 + (700-500)*4.01 + (used-700)*4.5;
    }
    printf("Summer months:%.2f\nNon-Summer months:%.2f\n", summer, notsum);
    return 0;
}