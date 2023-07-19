#include <iostream>
using namespace std;
void selectionShort(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        int minindex = i;
        for(int j = i +1 ; j <size ; j++){
            if(arr[minindex] > arr[j]){
                int temp = arr[minindex];
                arr[minindex] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {4,2,6,1,3,5};
    int size = sizeof(arr)/4;
    selectionShort(arr,size);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
