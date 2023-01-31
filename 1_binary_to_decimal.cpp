#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    int bit;
    int answer = 0;
    cout<<"Enter your Binary digit : ";
    cin>>n;
    for(int i = 0 ; n != 0 ; i++){
        bit = n%10;
        answer = (bit *pow(2, i)) + answer;
        n = n/10;
    }
    printf("The answer is %d", answer);
    return 0;
}