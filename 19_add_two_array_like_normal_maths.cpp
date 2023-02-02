#include <iostream>
#include <math.h>
using namespace std;

int addArray(int arr1[], int n, int arr2[], int m){
    int ans1 = 0;
    int ans2 = 0;
    for(int i = 0 ; i < n ; i++){
        ans1 = ans1 + (arr1[(n-i-1)%n] * pow(10,i));
    }
    for(int i = 0 ; i < m ; i++){
        ans2 = ans2 + (arr2[(m-i-1)%m] * pow(10,i));
    }
    return ans1 + ans2;

    }
int main(){
    int arr1[] = {1,1,1,1,1,1,1,1};
    int arr2[] = {6,6};
    int sum = addArray(arr1,8,arr2,2);
    cout<<sum<<endl;
    return 0;
}