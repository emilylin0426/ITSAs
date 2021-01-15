#include <stdio.h>
#include <string.h>

int main(){
    char target[129], line[513];
    scanf("%s", target);
    scanf("%s", line);
    char *ptr;
    int cnt=0;
    ptr = line;                                 //ptr指向line的起始位置
    while(ptr = strstr(ptr, target)){           //如果在ptr字串中有找到target字串
        ptr++;                                  //則ptr往後一位(看有沒有第二次重複)
        cnt++;                                  //計數+1
    }                                           //再重複一次找尋動作，直到strstr在ptr中找不到target字串而回傳NULL，跳出迴圈
    printf("%d\n", cnt);
    return 0;
}
