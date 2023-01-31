#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    int answer = 0;
    int bit;
    cout<<"Enter your Number : ";
    cin>>n;
    cout<<"The binary digits of "<<n<<" is ";
    for (int i = 0 ; n != 0 ; i++){
        bit = n&1;
        answer = (bit * pow(10,i)) + answer;
        n = n>>1;
    }
    printf("%d",answer);
    return 0;
}