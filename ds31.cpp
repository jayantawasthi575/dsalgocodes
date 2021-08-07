class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
    int i=0,k=d-1;
    while(i<k)
    {
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        i++;
        k--;
    }
    i=d,k=n-1;
    while(i<k)
    {
       int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        i++;
        k--; 
    }
    i=0,k=n-1;
    while(i<k)
    {
       int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        i++;
        k--; 
    }
    }
};