#include <stdbool.h>

bool is_digit(char x) {
    if ((x>=48)&&(x<=57))
        return true;
    else 
        return false;
}

bool is_letter(char x) {
    if (((x>=65)&&(x<=90))||((x<=122)&&(x>=97)))
        return true;
    else 
        return false;
}

bool is_punctuation(char x) {
     if (((x>=58)&&(x<=64))||((x<=96)&&(x>=91))||((x<=126)&&(x>=123))||((x<=47)&&(x>=33)))
        return true;
    else 
        return false;
}

int get_ascii_code(char first, char second, char third) {
    return (int)first*1000000+(int)second*1000+(int)third;
}

