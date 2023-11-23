int num_invers(int num){
    int r,n;
    if (num>=0){
        n=num%10;
        r=n;
        num=num/10;
        while (num>0){
            n=num%10;
            num=num/10;
            r=r*10;
            r=r+n;
        }
    return r;
    }   
    else 
        return 0;
}