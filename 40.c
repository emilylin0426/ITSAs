#include <stdio.h>

int main(){
    char tmp[10];
    int ISBN[10], i;
    for(i=0; i<10; i++){                        
        scanf("%s", &tmp[i]);
        if(tmp[i] == 'X'){                      //如果讀入X，存入10
            ISBN[i] = 10;
        }
        else ISBN[i] = tmp[i] - '0';            //如果不是的話，把讀入的char換成int存入
    }
    for(i=0; i<2; i++){                         //要加兩次
        for(int j=1; j<10; j++){                
            ISBN[j] = ISBN[j-1] + ISBN[j];      //每一位是前面所有位數的和
        }
    } 
    if(ISBN[9]%11 == 0)printf("YES\n");         //如果最後一碼是11的倍數，就是正確的ISBN
    else printf("NO\n");
    return 0;
}
