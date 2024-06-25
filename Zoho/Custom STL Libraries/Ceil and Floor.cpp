int ceil(float num){
    int temp = num;
    
    if(num > temp) return temp+1;
    return temp;
}

int floor(float num){
    int temp = num;
    
    if(num < temp) return temp-1;
    return temp;
}
