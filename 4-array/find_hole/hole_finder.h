#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int min = 1000, res;
    for (int i = 0; i < length; i++){
        for (int j = 0; j < width; j ++){
            if (matrix[j + (width * i)] < min){
                min = matrix[j + (width * i)];
                res = i * 100 + j;
            }
        }
    }
    return res;
}
