#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0; //Счётчик итераций
    int ans, l = left;
    while(left<=right){
        i++;
        int c  = (right+left)/2;
        if(number==c){
            return i*(c-l);
            break;
        }
        if(c>number)right=c-1;
        else left = c+1;
    }
    return i; //НЕ МЕНЯТЬ!
}