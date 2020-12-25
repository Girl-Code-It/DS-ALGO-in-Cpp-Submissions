void printPatt(int n)
{ int titr = 2*n - 1; 
int start = 0; 
int end = titr - 1; 
int arr[101][101]; 
while (n != 0)  
{ 
    for (int i = start; i <= end; i++) { 
    for (int j = start; j <= end; j++) { 
        if (i == start||i == end||j == start||j == end) 
        arr[i][j] = n; 
    } 
    } 
        --n; 
   ++start,--end;

}
 for (int i = 0; i < titr; i++) { 
    for (int j = 0; j < titr; j++) { 
    cout<<arr[i][j]; 
    } 
    cout<<endl; 
} 
}
