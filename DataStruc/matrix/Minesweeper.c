#include <stdio.h>
#define MAX_SIZE 20
void actualiza(int mat[MAX_SIZE][MAX_SIZE], int x, int y, int m, int n){
    if (x >= 0 && x < m && y >= 0 && y < n &&mat[x][y]!=9) {
        mat[x][y] += 1;
    }
}
void sustituye(int mat[MAX_SIZE][MAX_SIZE], int x, int y, int m, int n){
    mat[x][y] = 9;
    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {
            actualiza(mat, i, j, m, n);
        }
    }
}

void captureMat(int mat[MAX_SIZE][MAX_SIZE], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void DisplayMat(int mat[MAX_SIZE][MAX_SIZE], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int matref[MAX_SIZE][MAX_SIZE];
    int matres[MAX_SIZE][MAX_SIZE];
    captureMat(matref, m, n);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            matres[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (matref[i][j] == 1){
                sustituye(matres, i, j, m, n);
            }
        }
    }
    DisplayMat(matres, m, n);
    return 0;
}
