#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void print_mat(int*** a, int height, int length, int width){

    printf("{\n");
    for(int l = 0; l < height; l++){
        printf(" {\n");
        for(int m = 0; m < length; m++){
            printf("  {");
            for(int n = 0; n < width; n++){
                printf(" %d ", a[l][m][n]);
            }
            printf("}\n");
        }
        printf(" }\n");
    }
    printf("}\n");
} 

int main(){
    
    int w;
    int r;
    int c;

    printf("Enter the width of the matrix: ");
    scanf("%d", &w);

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &r);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &c);

    int*** matrix = malloc(w * sizeof(int**));

    for(int i = 0; i < w; i++){
        matrix[i] = malloc(r * sizeof(int*));
        for(int j = 0; j < r; j++){
            matrix[i][j] = malloc(c * sizeof(int));
            for(int k = 0; k < c; k++){
                matrix[i][j][k] = i+j+k;
            }
        }
    }

    print_mat(matrix, w, r, c);

    printf("Let us now access an random element using pointers\n");
    printf("Element [2][0][1] = %d\n", *(*(*(matrix + 2)+ 0)+ 1));

    for(int i = 0; i < w; i++) {
        for(int j = 0; j < r; j++) {
            free (matrix[i][j]);
        }
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}