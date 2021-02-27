#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Create a 2D array */ 
int** array2d(int r, int c){

    int** a = malloc(r * sizeof(int*));

    for(int i = 0; i < r; i++){
        a[i] = malloc(c * sizeof(int));

        for(int j = 0; j < c; j++){
            a[i][j] = 852;
        }
    }

    return a;
}

/* Free the dynamically created 2D array */
void free2d(int** res, int r, int c){

    for(int i = 0; i < r; i++){
        free(res[i]);
    }

    free(res);

}

/* Copy a dynamically created 2D array */
int** copy2d(int** a, int r, int c){
    int** result = malloc(r * sizeof(int*));

    for(int i = 0; i < r; i++){
        result[i] = malloc(c * sizeof(int));

        for(int j = 0; j < c; j++){
            result[i][j] = a[i][j];
        }
    }

    return result;
}

/* Print 2D array */
void print2d(int** a, int r, int c){

    printf("{\n");
    
    for(int i = 0; i < r; i++){
        printf(" {");
        for(int j = 0; j < c; j++){
            printf(" %d ", a[i][j]);
        }
        printf("}\n");
    }
    printf("}\n");
}

int main(){

    int** A = array2d(4, 4);
    print2d(A, 4, 4);

    printf("\nNow that we have created an array let us test the copy function.\n \n");

    int** A_copy = copy2d(A, 4, 4);
    print2d(A_copy, 4, 4);

    printf("\nNow we will modify an element within the copy and then compare it with the original.\n\n");

    A_copy[1][1] = 555;
    A_copy[2][2] = 555;
    A_copy[1][2] = 111;
    A_copy[2][1] = 111;

    printf("The original matrix\n\n");
    print2d(A, 4, 4);

    printf("\nPrint the modified copy.\n\n");
    print2d(A_copy, 4, 4);

    free2d(A, 4, 4);
    free2d(A_copy, 4, 4);
}