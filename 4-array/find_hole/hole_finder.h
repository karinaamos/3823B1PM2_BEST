#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int razm = length*width;
    int el =0;
    int ind_el = 0;
    int min_el = 895596;
    for (int i = 0; i<razm; i++){
        if ((matrix[i]<matrix[i-4])&& (matrix[i]<matrix[i-3])&&(matrix[i]<matrix[i-2])&&(matrix[i]<matrix[i-1])&&(matrix[i]<matrix[i+1])&&(matrix[i]<matrix[i+2])&&(matrix[i]<matrix[i+3])&&(matrix[i]<matrix[i+4])){
             el = matrix[i];
        if (min_el>el){
            min_el = el;
            ind_el = i;
        }
        }
    }
    int i1 = (ind_el/width);
    int j = (ind_el-width*i1)%width;
    int otv = i1*100+j;
    return otv;
}