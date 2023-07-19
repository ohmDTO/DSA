#include <iostream>
using namespace std;
void bubbleShort(int arr[], int size){
   for(int j = size -2 ; j >= 0 ; j--){
    int noOfSwap = 0;
     for(int i = 0 ; i < size-1 ; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            noOfSwap = 1;
        }
    }
        if(noOfSwap == 0){
            return;
        }
   }
}

void printArray(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }   
}
int main(){
    int arr[] = {1,15,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/4;
    bubbleShort(arr,size);
    printArray(arr,size);
    return 0;
}
