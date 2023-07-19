#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int>arr){
     int firstIndex = 0;
     int lastIndex = arr.size() -1;
     int midIndex = (firstIndex + lastIndex)/2;
    while (firstIndex  < midIndex)
    {
        swap(arr[firstIndex],arr[lastIndex]);
        firstIndex++;
        lastIndex--;
    }
    
    return arr;
}
vector<int> reverseArray(vector<int>arr, int firstIndex, int lastIndex){
    //  int firstIndex = 3;
    //  int lastIndex = arr.size() -1;
     int midIndex = (firstIndex + lastIndex)/2;
    while (firstIndex  < midIndex)
    {
        firstIndex++;
        swap(arr[firstIndex],arr[lastIndex]);
        lastIndex--;
    }
    
    return arr;
}
void printArray(vector<int>arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);
    vector<int>newArray(reverseArray(arr));
    printArray(newArray);

    return 0;
}
