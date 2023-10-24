int get_time(long long angle) {
    int a,b,c,d;
    d=angle/6;
    if (d<60)
        return d;
    a=(int)(d/(60*60));
    b=(int)(d/60);
    c=d-((int)(d/60))*60;
    return a*10000+b*100+c;
}