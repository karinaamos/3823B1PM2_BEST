#include <math.h>

void transform_1(double* array, int size){
    for (int i = 0; i < size; i++){
        array[i] += 1;
    }
}
void transform_2(double* array, int size){//Заменить элемент массива квадратным корнем модуля элемента.
    for (int i = 0; i < size; i++){
        array[i] = sqrt(fabs(array[i]));
    }
}
void transform_3(double* array, int size){//что взять по модулю элементы, которые возводим или элементы, из которых считаем среднее арифметическое
    double sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    double ar = sum / size;
    for (int i = 0; i < size; i++){
        array[i] = pow(array[i], ar);
    }
}
void transform_4(double* array, int size){ //Сменить знак у всех чётных элементов (каст к int), и возвести в степень -1 все нечётные (каст к int), взятые по модулю элементы
    for (int i = 0; i < size; i++){
        if ((int)array[i] % 2 == 0){
            array[i] = (int)array[i] * (-1);
        }
         if ((int)array[i] % 2 == 0){
            array[i] = pow((int)fabs(array[i]), -1);
        }
    }
}
void transform_5(double* array, int size){ //Занулить все элементы, которые после каста к int являются чётные, и имеют чётный индекс
    for (int i = 0; i < size; i++){
        if (((int)array[i] % 2 == 0) && (i % 2 == 0)) array[i] = 0;
    }
}
void transform_6(double* array, int size){//Изменить элементы массива так, чтобы примерно 50 (+-2%) процентов из них были больше 0.
    for (int i = 0; i < size; i++){
        if (i % 2 == 0) array[i] = -1;
        else array[i] = 1;
    }
}

void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < comands_count; i++){
        switch (comands[i]){
            case 1: transform_1(array, size); break;
            case 2: transform_2(array, size); break;
            case 3: transform_3(array, size); break;
            case 4: transform_4(array, size); break;
            case 5: transform_5(array, size); break;
            case 6: transform_6(array, size); break;
            default: break;
        }
    }
    return;
}

