#include <math.h>
#include <stdlib.h>
#include <time.h>


int* array(int *real_size, int n){
    int* array = malloc(sizeof(int) * *real_size);
    for (int i = 0; i < *real_size; i++){
        array[i] = n;
    }
    return array;

}

int* array_generator(int* real_size, int k, int m, int f){
    int x = 1, n = 0, d = 0;
    int* array;
    while (x == 1){
        for (int i = 10; i < k + 1; i++){
            if (k % i == 0){
                x = 0;
                *real_size = i;
                break;
            }
        }
        n = k / *real_size;
        array = array(real_size, n);
        if (f % 2 == 0){
            array[0] -= f/2;
            array[1] += f/2;
        }
        else{
            array[0] -= f/2 - 1;
            array[1] += f/2;
        }
        return array;
    }
}