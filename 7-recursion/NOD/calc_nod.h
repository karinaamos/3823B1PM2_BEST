#include <math.h>

int nod(int first, int second){
    int r;
    r = first % second;
    int nodd;
    if ((first==0)||(second==0)){
        return -1;
    }
    if (r == 0){
        return second;
    }
    else{
        nodd = nod(second, r);
        return nodd;
    }
}