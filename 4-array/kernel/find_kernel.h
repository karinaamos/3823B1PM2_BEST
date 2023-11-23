#include <math.h>
#include <stdlib.h>

void new_array(int matrix[], int new_matrix[], int first_index, int row, int col, int m_col){
    int count = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            new_matrix[count] = matrix[first_index + i * m_col + j];
            count += 1;
        }
    }
}


int sum_matrix(int new_matrix[], int kernel[], int kernel_row, int kernel_col){
    int sum = 0, count = 0;
    for (int i = 0; i < kernel_row; i++){
        for (int j = 0; j < kernel_col; j++){
            sum += new_matrix[count] * kernel[count];
            count += 1;
        }
    }
    return sum;

}

void change_array(int matrix[], int matrix2[], int count){
    for (int i = 0; i <= count; i++){
        matrix[i] = matrix2[i];
    }
}



int find_matrix_kernel(int matrix[], int kernel[], int matrix_row, int matrix_col, int kernel_row, int kernel_col){
    int new_matrix[kernel_col * kernel_row], first_index = 0;
    int count = 0, matrix2[150];
    while((matrix_row >= kernel_row) && (matrix_col >= kernel_col)){
        count = 0;
        for (int i = 0; i < (matrix_row - kernel_row + 1); i++){
            for (int j = 0; j < (matrix_col - kernel_col + 1); j++){
                first_index = i * matrix_col + j;
                new_array(matrix, new_matrix, first_index, kernel_row, kernel_col, matrix_col);
                matrix2[count] = sum_matrix(new_matrix, kernel, kernel_row, kernel_col);
                count += 1;
            }

        }
        matrix_row = sqrt(count);
        matrix_col = sqrt(count);
        change_array(matrix, matrix2, count);
        if (count < (kernel_row * kernel_col)) break;
        if ((matrix_row * matrix_col) != count){
            matrix_row = 3;
            matrix_col = 7;
        }

    }
    int otvet = 0;
    if (count == 1) return matrix[0];
    for (int i = 0; i < count; i++){
        otvet += matrix[i];
    }
    return otvet;
}