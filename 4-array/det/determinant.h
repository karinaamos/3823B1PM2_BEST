#include <math.h>

int det_mat_2x2(int matrix[]) {
    return matrix[0] * matrix[3] - matrix[1] * matrix[2];
}

int det_mat_3x3(int matrix[]) {
    int matrix1_2x2[4] = { matrix[4],matrix[5],matrix[7],matrix[8] };
    int matrix2_2x2[4] = { matrix[3],matrix[5],matrix[6],matrix[8] };
    int matrix3_2x2[4] = { matrix[3],matrix[4],matrix[6],matrix[7] };
    int k1 = matrix[0];
    int k2 = matrix[1];
    int k3 = matrix[2];
    return k1 * det_mat_2x2(matrix1_2x2) - k2 * det_mat_2x2(matrix2_2x2) + k3 * det_mat_2x2(matrix3_2x2);
}

int det_mat_4x4(int matrix[]) {
    int matrix1_3x3[9] = { matrix[5],matrix[6],matrix[7],matrix[9],matrix[10],matrix[11],matrix[13],matrix[14],matrix[15]};
    int matrix2_3x3[9] = { matrix[4],matrix[6],matrix[7],matrix[8],matrix[10],matrix[11],matrix[12],matrix[14],matrix[15] };
    int matrix3_3x3[9] = { matrix[4],matrix[5],matrix[7],matrix[8],matrix[9],matrix[11],matrix[12],matrix[13],matrix[15] };
    int matrix4_3x3[9] = { matrix[4],matrix[5],matrix[6],matrix[8],matrix[9],matrix[10],matrix[12],matrix[13],matrix[14] };
    int k1 = matrix[0];
    int k2 = matrix[1];
    int k3 = matrix[2];
    int k4 = matrix[3];
    return k1 * det_mat_3x3(matrix1_3x3) - k2 * det_mat_3x3(matrix2_3x3) + k3 * det_mat_3x3(matrix3_3x3) - k4 * det_mat_3x3(matrix4_3x3);
}

int det_mat_5x5(int matrix[]) {
    int matrix1_4x4[16] = { matrix[6],matrix[7],matrix[8],matrix[9],matrix[11],matrix[12],matrix[13],matrix[14],matrix[16],matrix[17],matrix[18],matrix[19],matrix[21],matrix[22],matrix[23],matrix[24] };
    int matrix2_4x4[16] = { matrix[5],matrix[7],matrix[8],matrix[9],matrix[10],matrix[12],matrix[13],matrix[14],matrix[15],matrix[17],matrix[18],matrix[19],matrix[20],matrix[22],matrix[23],matrix[24] };
    int matrix3_4x4[16] = { matrix[5],matrix[6],matrix[8],matrix[9],matrix[10],matrix[11],matrix[12],matrix[14],matrix[15],matrix[16],matrix[17],matrix[19],matrix[20],matrix[21],matrix[22],matrix[24] };
    int matrix4_4x4[16] = { matrix[5],matrix[6],matrix[7],matrix[9],matrix[10],matrix[11],matrix[12],matrix[14],matrix[15],matrix[16],matrix[17],matrix[19],matrix[20],matrix[21],matrix[22],matrix[24] };
    int matrix5_4x4[16] = { matrix[5],matrix[6],matrix[7],matrix[8],matrix[10],matrix[11],matrix[12],matrix[13],matrix[15],matrix[16],matrix[17],matrix[18],matrix[20],matrix[21],matrix[22],matrix[23] };
    int k1 = matrix[0];
    int k2 = matrix[1];
    int k3 = matrix[2];
    int k4 = matrix[3];
    int k5 = matrix[4];
    return k1 * det_mat_4x4(matrix1_4x4) - k2 * det_mat_4x4(matrix2_4x4) + k3 * det_mat_4x4(matrix3_4x4) - k4 * det_mat_4x4(matrix4_4x4) + k5 * det_mat_4x4(matrix5_4x4);
}

int determinant(int matrix[], int size){
    int cvad = 0;
    for (int i = 0; i < 10; i++) {
        if (size == pow(i, 2)) {
            cvad += 1;
        }
    }
    if (cvad == 0) {
        return -404;
    }
    else {
        if (size == 4) {
            return det_mat_2x2(matrix);
        }
        else if (size == 9) {
            return det_mat_3x3(matrix);
        }
        else if (size == 16){
            return det_mat_4x4(matrix);
        }
        else if (size == 25) {
            return det_mat_5x5(matrix);
        }
    }
}
