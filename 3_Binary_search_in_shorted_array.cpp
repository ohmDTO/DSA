#include <iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int low, mid, high;
    low = 0;
    high = size -1;
    mid = low + (high - low)/2;
    while (low <= high){
        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid +1;
        }
        mid = low + (high -low)/2;
    }
    return 0;  
}
int main(){
    int arr[] = {1,2,3,4,5,8,9};
    int size = sizeof(arr)/4;
    if(int b = binarySearch(arr,size,50)){
        cout<<"element is found at index : "<<b<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }
    return 0;
}