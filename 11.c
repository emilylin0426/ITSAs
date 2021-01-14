#include <stdio.h>

int main(){
    int col, row, i, j;
    while(scanf("%d %d", &row, &col)!=EOF){
        int matrix[row][col];
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                scanf("%d", &matrix[i][j]);
            }
        }
        for(i=0; i<col; i++){
            for(j=0; j<row-1; j++){
                printf("%d ", matrix[j][i]);
            }
            printf("%d\n", matrix[j][i]);
        }
    }
    return 0;
}