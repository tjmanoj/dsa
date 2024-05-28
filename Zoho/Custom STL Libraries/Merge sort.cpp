void merge(int a[],int low,int mid,int high){
    int temp[high - low + 1];
    int i = low;
    int j = mid+1;
    int k=0;

    while(i <= mid && j <= high){
        if(a[i] < a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }

    while(i <= mid) temp[k++] = a[i++];
    while(j <= high) temp[k++] = a[j++];

    for(int i=low;i<=high;i++) a[i] = temp[i - low];
}

void mergeSort(int a[],int low, int high){
    if(low < high){
        int mid = (low + high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
