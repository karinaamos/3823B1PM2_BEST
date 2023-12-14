#include <math.h>


int search(int* array, int array_size, int* subarray, int sub_size){
    int index = 0, p = 0, count = 0;
    for (int i = 0; i < array_size; i++){
        if (array[i] == subarray[0]){
            index = i;
            p = i + 1;
            for (int j = 1; j < sub_size; j++){
                if (array[p] == subarray[j]){
                    count += 1;
                    p += 1;
                }
                else{
                    index = -1;
                    break;
                }
            }
            if (index != -1) return index;
        }
    }
    return -1;
}


int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int sum = 0;
    sum += search(array, array_size, subarray1, subarray_size1);
    sum += search(array, array_size, subarray2, subarray_size2);
    sum += search(array, array_size, subarray3, subarray_size3);
    return sum;
}