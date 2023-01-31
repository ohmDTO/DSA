#include <iostream>
using namespace std;
bool isposible(int arr[], int n, int m, int mid){
    int studentcount = 1;
    int pageSum = 0;
    for(int i = 0 ; i < n ; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int bookalot(int arr[], int n, int m){
    int low,high,mid;
    int pageSum = 0;
    low = 0;
    for(int i = 0 ; i < n ; i++){
        pageSum += arr[i];
    }
    high = pageSum;
    mid = low + (high - low)/2;
    int ans = -1;
    while (low <= high)
    {
        if(isposible(arr,n,m,mid)){
            ans = mid;
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
    int arr[] = {20,50,60,80,90};
    int n = sizeof(arr)/4;  // n = no. of books.
    int m = 2;              // m = no. of student.
    int student1 = bookalot(arr ,n , m);
    cout<<"book alloated with page for student 1 is : "<<student1<<endl;
    return 0;
}