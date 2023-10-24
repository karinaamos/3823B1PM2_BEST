int chess_rook(char a, int b, char c, int d){
    if((a>72)||(c>72)||(b>8)||(b<1)||(d>8)||(d<1))
        return 0;
    if((a==c)&&(b==d))
        return 0;
    if((a==c)||(b==d))
        return 1;
    else
        return 0;
}