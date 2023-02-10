#include <iostream>
using namespace std;

int main(){         
    int arr[9][9] = {{ 1,  2,  3,  4,  5,  6,  7,  8,  9},
                     {32, 33, 34, 35, 36, 37, 38, 39, 10},
                     {31, 56, 57, 58, 59, 60, 61, 40, 11},
                     {30, 55, 72, 73, 74, 75, 62, 41, 12},
                     {29, 54, 71, 80, 81, 76, 63, 42, 13},
                     {28, 53, 70, 79, 78, 77, 64, 43, 14},
                     {27, 52, 69, 68, 67, 66, 65, 44, 15},
                     {26, 51, 50, 49, 48, 47, 46, 45, 16},
                     {25, 24, 23, 22, 21, 20, 19, 18, 17}};

        int m = 8;
        int n = 8;
        int x = 0;
        int y = 1;
   while (n >= 0 && m >= 0)
   {
        for(int i = x ; i <=n ; i++){ // top
            cout<<arr[x][i]<<", ";
        }
        for(int j = x; j < n ; j++){  // right
            cout<<arr[j][m]<<", ";
        }
        for(int k = m; k >= y ; k--){ // bottom
            cout<<arr[n][k]<<", ";
        }
        for(int l = m; l >= y ; l--){  // left
            cout<<arr[l][x]<<", ";
        }
        m--;
        n--;
        x++;
        y++;
   }

    return 0;
}