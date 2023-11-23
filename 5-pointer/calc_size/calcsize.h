#include <math.h>

int calcsize(void* memory){
    int size=0;
    char* p=memory;
    int in1=0, in2=0;
    for(int i=0;;i++){
        if (*(p+i)==11){
            in1=i;
            break;
        }
    }
    for(int i=0;;i++){
        if (*(p+i)==47){
            in2=i;
            break;
        } 
    }
    int b=in2-in1;
    size=in2+b;

    return size;
}