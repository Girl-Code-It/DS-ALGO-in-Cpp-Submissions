int findFloor(int *arr,int n,int x) {
   
    if(arr[n-1]>x)
        return findFloor(arr,n-1,x);
    else
        return arr[n-1];
}
