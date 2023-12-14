#include <math.h>

int func(int* array, int array_size)
{
    if (array_size == 0)
        return array[0];
    else
        return array[array_size] + func(array, array_size - 1);
}

int calc_sum_elements(int* array, int array_size){
    if (array_size <= 0)
        return -1;
    else 
        return func(array, array_size - 1);
    
}