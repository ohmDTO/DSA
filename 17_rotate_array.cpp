#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRotatedArray(vector<int> v , int k){
    vector<int>a(v.size());
    for(int i = 0 ; i < v.size() ; i++){
         a[i] = v[(i+k) % v.size()];
    }
    return a;
}
vector<int> rightRotatedArray(vector<int> v , int k){
    vector<int>a(v.size());
    for(int i = 0 ; i < v.size() ; i++){
         a[(i+k) % v.size()] = v[i];
    }
    return a;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    // cout<<v.size();
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    v = rightRotatedArray(v,2);
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}