#include <math.h>

int nod(int first, int second){
    int r;
    r = first % second;
    int nod1;
    if ((first==0)||(second==0)){
        return -1;
    }
    if (r == 0){
        return second;
    }
    else{
        nod1 = nod(second, r);
        return nod1;
    }
}
