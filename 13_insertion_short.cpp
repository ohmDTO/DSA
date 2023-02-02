#include <iostream>
using namespace std;
void insertionShort(int arr[],int size){
    for(int i = 1 ; i < size ; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j >= 0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void printarray(int arr[], int size){
    for(int i = 0 ; i < size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {54,65,1,656,56,54,6,65,61,65,651,654,64,6};
    int size = sizeof(arr)/4;
    insertionShort(arr,size);
    printarray(arr, size);
    return 0;
}