#include <math.h>
#include <stdlib.h>
#include <time.h>


int* create_array(int *real_size, int number){
    int* array = malloc(sizeof(int) * *real_size);
    for (int i = 0; i < *real_size; i++){
        array[i] = number;
    }
    return array;

}

int* array_generator(int* real_size, int k, int m, int f){
    int flag = 1, number = 0, difference = 0;
    int* array;
    while (flag == 1){
        for (int i = 10; i < k + 1; i++){
            if (k % i == 0){
                flag = 0;
                *real_size = i;
                break;
            }
        }
        number = k / *real_size;
        array = create_array(real_size, number);
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