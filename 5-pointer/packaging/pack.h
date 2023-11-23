#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    unsigned long long sum=0;
    if (size>8)
    return 0;
    else{
        for (int i=size-1;i>=0;i--){
            sum=sum|arr[i];
            if (i==0)
            break;
            sum=sum<<8;
    
    }
    }
    return sum;
}

unsigned char unpack_ull(unsigned long long input){
    unsigned char x5;
    x5=input>>32;

    return x5;
}