int reverse(int number) {
    int arr[4]={number/1000,(number/100)%10,(number/10)%10,number%10};
    if (arr[3]!=0)
        return arr[3]*1000+arr[2]*100+arr[1]*10+arr[0];
    if (arr[3]==0){
        return arr[2]*100+arr[1]*10+arr[0];
        if (arr[2]==0){
            return arr[1]*10+arr[0];
            if (arr[1]==0)
                return arr[0];
        }
    }
}

double decomposition(int number) {
    int x1,x2,x3,x4;
    x1=(number/1000)*1000;
    x2=((number/100)%10)*100;
    x3=((number/10)%10)*10;
    x4=number%10;
    return (double)(4/((1.0/x1)+(1.0/x2)+(1.0/x3)+(1.0/x4)));
}

int append(int number, int start, int end) {
    if (start>0)
        return (start*10000+number)*10+end;
    else 
        return (start*10000-number)*10-end;
}