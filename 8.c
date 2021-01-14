#include <stdio.h>

int main(){
    int input, i;
	while(scanf("%d", &input)!=EOF){
		for(i=2; i<input && input%i != 0; i++);
		if(i == input)printf("YES\n");
		else printf("NO\n");
	}
}