int monthday(int month, int year){
    int a;
    if ((month==2)&&(year%4==0))
        month=20;
    if ((month==2)&&(year%4!=0))
        month=21;
    switch(month){
        case 1: a=31; break;
        case 3: a=31; break;
        case 4: a=30; break;
        case 5: a=31; break;
        case 6: a=30; break;
        case 7: a=31; break;
        case 8: a=31; break;
        case 9: a=30; break;
        case 10: a=31; break;
        case 11: a=30; break;
        case 12: a=31; break;
        case 20: a=29; break;
        case 21: a=28; break;
        default: return 0;
    }
    return a;
}