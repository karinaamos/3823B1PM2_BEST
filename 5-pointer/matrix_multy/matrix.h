#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if (aN != bM) return NULL;
    int* res_matrix = malloc(aM*bN*sizeof(int));
    for (int i = 0; i < aM; i++) {
        for (int j = 0; j < bN; j++) {
            res_matrix[i * bN + j] = 0;
            for (int k = 0; k < aN; k++) {
                res_matrix[i * bN + j] += A[i * aN + k] * B[k * bN + j];
            }
        }
    }

    return res_matrix;
    free(res_matrix); 

    
}