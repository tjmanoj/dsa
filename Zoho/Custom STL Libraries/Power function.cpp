int pow(int n,int power){
    int tot = n;
    for(int i=0;i<power-1;i++) tot = (tot*n);
    return tot;
}
