#include <iostream>
using namespace std;
void rightShiftNonZero(int arr[], int size){
    int i = 0;
    int j = 0;
    while(arr[i] != 0){
        i++;
        j++;
    }   
    if(i >= size){
        return;
    }
        i++;
    while (i < size && j < size)
    {                                
         if(arr[i] != 0){
            arr[j] = arr[i];
            arr[i] = 0;
            j++;
         }
         i++;
    }
    
}
void printArray(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i] <<" ";
    }
}
int main(){
    int arr[] = {0,1,0,2,0,3,0,4,0,5,6,0,7,8,0,9,0,10,11,0,12,13,0,14,15,0,16,17,0,18,19,20};
    int size = sizeof(arr)/4;
    rightShiftNonZero(arr,size);
    printArray(arr,size);
    return 0;
}