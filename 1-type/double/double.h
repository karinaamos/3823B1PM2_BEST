#include <math.h>
bool compare_double(double x, double y) {
        if ((-0.000001<=x-y) && (x-y<=0.0000001))
            return true;
        else 
            return false;
    }

int get_nearest_int(double x) {
        if (x+0.5>=(int)x+1)
            x=(int)x+1;
        else 
            x=(int)x;
    }

double get_fractional(double x) {
        if (x>=0)
            return x=x-(int)x;
        else {
            return x-((int)x-1);
        }
}