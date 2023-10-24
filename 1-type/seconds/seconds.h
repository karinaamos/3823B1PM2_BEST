int get_years(int seconds) {
    int x,y;
    x=1970;
    y=(double)(seconds/(60*60*24*31*12));
    if (y>(int)y)
        return x+(int)y+1;
    else 
        return x+y;
}

int get_month(int seconds) {
    int m,m1;
    m=(double)(seconds/(60*60*24*31));
    if (m>(int)m)
        m=(int)m+1;
    return m%12;
}

int get_day(int seconds) {
    int d,d1;
    d=(double)(seconds/(60*60*24));
    if (d>(int)d)
        d=(int)d+1;
    return d%31;
}

int get_hours(int seconds) {
    int h,h1;
    h=(double)(seconds/(60*60));
    if (h>(int)h)
        h=(int)h+1;
    return h%24;
}

int get_minutes(int seconds) {
    int m,m1;
    m=(double)(seconds/60);
    if (m>(int)m)
        m=(int)m+1;
    return m%60;
}

int get_seconds(int seconds) {
    return seconds%60;
}


int get_magical_value(int seconds) {
    int x;
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    x=(pow(((year+month)/(1+day+second)),2))+((minutes+minutes/(1+hours))/(1+hours));
    return x; 
}