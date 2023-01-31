#include <iostream>
using namespace std;

int firstOccur(int arr[], int size, int key){
    int low, mid, high;
    low = 0;
    high = size -1;
    mid = low + (high - low)/2;

    int ans = -1;
    while (low <= high)
    {
        if(key == arr[mid]){
            ans = mid;
            high = mid -1;
        }
        else if(key < arr[mid]){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
        mid = low + (high - low)/2;
    }
    return ans;
}

int lastOccur(int arr[], int size, int key){
    int low, mid, high;
    low = 0;
    high = size -1;
    mid = low + (high - low)/2;

    int ans = -1;
    while (low <= high)
    {
        if(key == arr[mid]){
            ans = mid;
            low = mid +1;
        }
        else if(key < arr[mid]){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
        mid = low + (high - low)/2;
    }
    return ans;
}
int main(){
    int arr[] = {1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 6, 7, 9, 15, 18, 21, 23};
    int size = sizeof(arr)/4;
    int a = firstOccur(arr,size,3);
    int b = lastOccur(arr,size,3);
    cout<<"first occurance of 5 is at index of : "<<a<<endl;
    cout<<"last occurance of 5 is at index of : "<<b<<endl;
    cout<<"Total no. of occurance is : "<<(b - a)+1<<endl;

    return 0;
}