#include <stdio.h>

int main(){
    int col, row, i, j;
    while(scanf("%d %d", &row, &col)!=EOF){
        int matrix[row][col];
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                scanf("%d", &matrix[i][j]);     //讀入矩陣
            }
        }
        for(i=0; i<col; i++){                   //輸出時，row&col反轉(外圈迴圈為col、內圈row)
            for(j=0; j<row-1; j++){             //迴圈的ij控制的是行列要印的個數
                printf("%d ", matrix[j][i]);    //印出矩陣時也要反轉row&col，在印第i列第j行時，要印出原本矩陣的第j列第i行   
            }                                   
            printf("%d\n", matrix[j][i]);
        }
    }
    return 0;
}
