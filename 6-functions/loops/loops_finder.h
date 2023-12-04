#include <math.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct coordinates{
        int row;
        int col;
    }coordinates;
int loop = 0;
coordinates finish[10];


void print(int** array, int size){
    for (int i = 0; i < sqrt(size); i++){
        for (int j = 0; j < sqrt(size); j++){
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
}

int** matrix1(int* pic, int size, int* p){//создание матрицы правильно!!
    size = (int)sqrt(size);
    int** array = malloc(sizeof(int*) * size);
    for (int i = 0; i < size; i++){
        array[i] = p + i * size;
    }
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            array[i][j] = pic[i * size + j];
        }
    }
    return array;
}

void start(int** array, int size, int* start_row, int* start_col){//правильно!!
    for (int i = 0; i < sqrt(size); i++){
        if (array[i][0] == 1){
            *start_row = i;
            *start_col = 0;
            break;
        }
    }
}

int check(coordinates old[], int length, int row, int col){
    for (int i = 0; i < length; i++){
        if ((old[i].row == row) && (old[i].col == col)){
            return 1;
        }
    }
    return 0;
}

int looops(int** matrix, int* now_row, int* now_col, coordinates old[], int* length, int size);

int search(int** array, int* now_row, int* now_col, int* loops, coordinates old[], int* length, int size){
    int flag = 0, row, col;
    coordinates memory[8];
    for (int i = -1; i < 2; i++){
        for (int j = -1; j < 2; j++){
            if ((*now_row - i < 0) || (*now_col - j < 0) || ((i == 0) && (j == 0)) || (check(old, *length, *now_row - i, *now_col - j) == 1) ||(*now_row - i >= size) || (*now_col - j >= size)) continue;
            else if (array[*now_row - i][*now_col - j] == 1){
                memory[flag].row = *now_row - i;
                memory[flag].col = *now_col - j;
                flag += 1;
                row = *now_row - i;
                col = *now_col - j;
            }
        }
    }
    if (flag == 0){//check point
        finish[loop].row = *now_row;
        finish[loop].col = *now_col;
        loop += 1;
        return 0;
    }
    if (flag == 1){
        *now_row = row;
        *now_col = col;
        old[*length].row = row;
        old[*length].col = col;
        *length += 1;
        return 1;
    }
    int count = 0;
    for (int i = *length; i < *length + flag; i++){
        old[i].row = memory[count].row;
        old[i].col = memory[count].col;
        count += 1;
    }
    *length += flag;
    int XREHb = 0;

    if (flag > 1){
        for (int i = 0; i < flag; i++){//запишем все варианты 
            *now_row = memory[i].row;
            *now_col = memory[i].col;
            XREHb = looops(array, now_row, now_col, old, length, size);
        }
    }
    return 0;
}


int looops(int** matrix, int* now_row, int* now_col, coordinates old[], int* length, int size){
    int stop = 1;
    int loops = 0;
    while (stop != 0){
        stop = search(matrix, now_row, now_col, &loops, old, length, size);
    }
}

void finished(coordinates finish[], int loop, int* finish_row, int* finish_col){
    for (int i = 0; i < loop; i++){
        if (finish[i].col > *finish_col){
            *finish_row = finish[i].row;
            *finish_col = finish[i].col;
        }
    }
}

void find_loops(int* pic, int size, int* num_loop, int* start_row, int* start_col, int* finish_row, int* finish_col){
    int* p = malloc(sizeof(int) * size);
    int** matrix = matrix1(pic, size, p);
    *finish_row = -1, *finish_col = -1, *num_loop = -1, *start_row = -1, *start_col = -1, loop = 0;             
    coordinates array[40];
    for (int i = 0; i < 40; i++){
        array[i].row = -1;
        array[i].col = -1;
    }
    for (int i = 0; i < 10; i++){
        finish[i].row = -1;
        finish[i].col = -1;
    }
    start(matrix, size, start_row, start_col);
    array[0].row = *start_row;
    array[0].col = *start_col;
    int now_row, now_col, length = 1, stop;
    now_row = *start_row;
    now_col = *start_col;
    size = sqrt(size);
    stop = looops(matrix, &now_row, &now_col, array, &length, size);
    finished(finish, loop, finish_row, finish_col);
    *num_loop = (loop - 1) / 2; 
    free(p);
    return;
}