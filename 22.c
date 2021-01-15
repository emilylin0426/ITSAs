#include <stdio.h>

int main(){
    int matrix[3][3];
    scanf("%d %d %d", &matrix[0][0], &matrix[0][1], &matrix[0][2]);         //讀入3乘3 圈叉矩陣
    scanf("%d %d %d", &matrix[1][0], &matrix[1][1], &matrix[1][2]);
    scanf("%d %d %d", &matrix[2][0], &matrix[2][1], &matrix[2][2]);
    int i, j, win=0;                                                        //預設為和局
    for(i=0; i<3; i++){
        if(matrix[i][0]==0 && matrix[i][1]==0 && matrix[i][2]==0)win=1;     //判斷橫排是否連線 
        if(matrix[i][0]==1 && matrix[i][1]==1 && matrix[i][2]==1)win=1;     //上一行判斷O 這裡判斷X
        if(matrix[0][i]==0 && matrix[1][i]==0 && matrix[2][i]==0)win=1;     //判斷直排是否連線
        if(matrix[0][i]==1 && matrix[1][i]==1 && matrix[2][i]==0)win=1;
    }
    if(matrix[0][0]==0 && matrix[1][1]==0 && matrix[2][2]==0)win=1;         //判斷左上到右下的斜線是否連線
    if(matrix[0][0]==1 && matrix[1][1]==1 && matrix[2][2]==1)win=1;
    if(matrix[0][2]==0 && matrix[1][1]==0 && matrix[2][0]==0)win=1;         //判斷右上到左下的斜線
    if(matrix[0][2]==1 && matrix[1][1]==1 && matrix[2][0]==1)win=1;

    if(win==0)printf("False\n");
    else printf("True\n");
    return 0;
}
