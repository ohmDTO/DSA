#include <iostream>
using namespace std;

int findPeak(int arr[], int size){
    int low = 0;
    int high = size -1;
    int mid = low + (high - low)/2;
    while(low < high){
        if(arr[mid] < arr[mid+1]){
            low = mid + 1;
        }
        if(arr[mid] > arr[mid+1]){
            high = mid;
        }
        mid = low + (high - low)/2;
    }
    return mid;
}
int main(){
    int arr[] = {0,1,4,6,7,9,12,56,100,102,103,8,5,2,1};
    int size = sizeof(arr)/4;
    int peakElement = findPeak(arr, size);
    cout<<"peak element is found at index : "<<peakElement<<endl;
    return 0;
}