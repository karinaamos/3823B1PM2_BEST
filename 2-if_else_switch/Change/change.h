long long change(int a, int b, int c, int d){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int e;
    int f;
    int s;
    e=c-a;
    f=d-b;
    s=100*e+f;
    printf("%d", s);
    return 0;
}