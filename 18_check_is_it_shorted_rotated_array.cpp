#include <iostream>
using namespace std;

int isShortedRotatedArray(int arr[], int size){
    int cout = 0;
    for(int i = 1 ; i < size ; i++){
        if(arr[i-1] > arr[i]){
            cout++;
        }
    }
    if(cout == 1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int arr[] = {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,1,1,1,2,2,2,2,2,2,3,4,};
    int size = sizeof(arr)/4;
    cout<<"test --> "<<isShortedRotatedArray(arr,size);
    return 0;
}