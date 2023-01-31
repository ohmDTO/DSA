#include <iostream>
using namespace std;

int isNonReapeating(int arr[], int size){
    int ans = 0;
    for(int i = 0 ; i < size ;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int isReapeating(int arr[], int size){
    int ans = 0;
    for(int i = 0 ; i < size ;i++){
        ans = ans^arr[i];
    }
    for(int i = 0 ; i < size-1 ;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr1[] = {1,2,3,4,3,2,1};
    int size1 = sizeof(arr1)/4;
    int ans = isNonReapeating(arr1,size1);
    if(ans){
        cout<<"element "<<ans <<" is not reapeating in array."<<endl;
    }
    else{
        cout<<"all element is repeat."<<endl;
    }
    int arr2[] = {1,2,3,4,2};
    int size2 = sizeof(arr2)/4;

    int b = isReapeating(arr2,size2);
    cout<<"repeating element is : "<<b<<endl;

    return 0;
}