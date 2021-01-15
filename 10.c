#include <stdio.h>	
int main(){
	int X,Y;
	int a;
	scanf("%d %d",&X,&Y);
	if(X>Y)a=X;
	else a=Y;
	for(a==X||a==Y; X%a!=0 || Y%a!=0 ;a--);		//若XY不能同時整除a，則往下減1繼續找，當跳出迴圈表示找到公因數a(XY都能整除a)
	printf("%d\n",a);
}
