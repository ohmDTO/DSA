#include <iostream>
using namespace std;
double morePersision(int num, int presision, int tempsol);
int sqrt(int num){
long long int low, mid, high;
    low = 0;
    high = num;
    mid = low + (high - low)/2;
    int ans = -1;
    while (low <= high)
    {
        long long int square = mid * mid;
        if(square == num){
            return mid;
        }
        else if(square < num){
            ans = mid;
            low = mid +1;
        }
        else{
            high = mid -1;
        }
        mid = low + (high - low)/2;
    }
    return ans;
}
double morePersision(int num, int presision, int temp){
    double factor = 1;
    double ans = temp;
    for(int i = 0 ; i < presision ; i++){
        factor = factor/10;
        for(double j  = ans ; j*j < num ; j+=factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int tempsol = sqrt(n);  
    cout<<tempsol<<endl;
     cout<<"sqrt of "<<n<<" is "<<morePersision(n,5,tempsol)<<endl;
    return 0;
}
