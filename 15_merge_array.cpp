#include <iostream>

using namespace std;
void mergeArray(int arr1[],int n, int arr2[],int m, int arr3[]){
    int i = 0 ;
    int j = 0 ;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            arr3[i+j] = arr1[i];
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            arr3[i+j] = arr1[i];
            i++;
        }
        else if(arr1[i] > arr2[j]){
            arr3[i+j] = arr2[j];
            j++;
        }
    }
    while (i < n)
    {
        arr3[i+j] = arr1[i];
        i++;
    }
    while (j < m)
    {
        arr3[i+j] = arr2[j];
        j++;
    }
    
}
void printArray(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr1[] = {1,3,6};
    int arr2[] = {2,4,8,10,11,13,14};
    int n = sizeof(arr1)/4;
    int m = sizeof(arr2)/4;
    int arr3[n+m];
    mergeArray(arr1,n,arr2,m,arr3);
    printArray(arr3,n+m);

    return 0;
}
