unsigned char max_byte(unsigned short number) {
    int a;
    a=number;
    int x15,x14,x13,x12,x11,x10,x9,x8,x7,x6,x5,x4,x3,x2,x1,x0;
    x15=a-(int)(a/2)*2;
    x14=((int)(a/2))-(int)(a/4)*2;
    x13=(int)(a/4)-(int)(a/8)*2;
    x12=(int)(a/8)-(int)(a/16)*2;
    x11=(int)(a/16)-(int)(a/32)*2;
    x10=(int)(a/32)-(int)(a/64)*2;
    x9=(int)(a/64)-(int)(a/128)*2;
    x8=(int)(a/128)-(int)(a/256)*2;
    x7=(int)(a/256)-(int)(a/512)*2;
    x6=(int)(a/512)-(int)(a/1024)*2;
    x5=(int)(a/1024)-(int)(a/2048)*2;
    x4=(int)(a/2048)-(int)(a/4096)*2;
    x3=(int)(a/4096)-(int)(a/8192)*2;
    x2=(int)(a/8192)-(int)(a/16258)*2;
    x1=(int)(a/16258)-(int)(a/32516)*2;
    x0=(int)(a/32526)-(int)(a/65052)*2;
    int arr[16]={x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15};
    int f,s;
    f=arr[7]*1+arr[6]*2+arr[5]*4+arr[4]*8+arr[3]*16+arr[2]*32+arr[1]*64+arr[0]*128;
    s=arr[15]*1+arr[14]*2+arr[13]*4+arr[12]*8+arr[11]*16+arr[10]*32+arr[9]*64+arr[8]*128;
    if (f>s)
        return f;
    if (s>f)
        return s;
    else 
        return f;
}