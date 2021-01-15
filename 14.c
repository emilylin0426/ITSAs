#include <stdio.h>
#include <string.h>

int palindrome(char input[100]){
    int len= strlen(input)-1;                   //長度要扣掉字串結尾的'\0'
    int start=0, end=len;                       //字串起始點位置start、結束點位置end
    int palin=1;                                //預設為YES(是迴文)
    while(start != end && start <= len/2){      //當start跑到中間表示整串字串都判斷完畢
        if(input[start] == input[end]){         //start往後，end往前判斷
            start++;
            end--;
        }
        else {                                  //若不符合迴文標準則改為0 (false)
            palin = 0;
            break;                              //也不用繼續判斷了
        }
    }
    if(palin == 0)return 0;                     //回傳true(1)或false(0)
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
