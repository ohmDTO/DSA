#include <iostream>
using namespace std;
int findPivot(int arr[], int size){
    int low, mid, high;
    low = 0;
    high = size-1;
    mid = low + (high - low)/2;
    while (low < high)
    {
        if(arr[mid] > arr[0]){
            low = mid +1;
        }
        else{
            high = mid;
        }
        mid = low + (high -low)/2;
    }
    return mid;
    
}
int main(){
int arr[] = {2,3,4,5,6,7,1};
int size = sizeof(arr)/4;
int index = findPivot(arr,size);
cout<<"povit is fount at index : "<<index<<endl;
    return 0;
}