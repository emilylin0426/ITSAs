#include <stdio.h>

int main(){
    int input, i;
	while(scanf("%d", &input)!=EOF){
		for(i=2; i<input && input%i != 0; i++);			//從2開始找，如果input可以整除i的話，跳出回圈，如果i一直加到input-1都還無法整除input
		if(i == input)printf("YES\n");				//就代表這個input沒有因數，是質數
		else printf("NO\n");
	}
}
