int get_module(int a, int b, int c) {
    if ((a>=c)||(b>=c))
        return (a%c*b%c);
    else 
        return (a*b)%c;
}