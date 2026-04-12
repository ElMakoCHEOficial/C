#include <stdio.h>
void sumaMat(int mat1[100][100],int mat2[100][100], int mat3[100][100], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            mat3[i][j]=mat2[i][j]+mat1[i][j];
        }
    }   
}
void capturaMat(int mat[100][100], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&mat[i][j]);
        }
    } 
}
void displayMat(int mat[100][100],int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int mat1[m][n];
    int mat2[m][n];
    int mat3[m][n];
    capturaMat(mat1,m,n);
    capturaMat(mat2,m,n);
    sumaMat(mat1,mat2,mat3,m,n);
    displayMat(mat3,m,n);
    return 0;
}
