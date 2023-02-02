#include <iostream>
#include <string.h>
using namespace std;
void countCharecter(char* ptr){
    int n = strlen(ptr);
    int i = 1;
    int j = 0;
    while(ptr[i] != '\0'){
        int count = 1;
        while(ptr[i-1] == ptr[i]){
            count++;   
            i++;  
        }
        // j++;
        if(count == 1){
            ptr[j] = ptr[i-1];
            j++;
        }
        if(count > 1){
            ptr[j] = ptr[i-1];
            j++;
            ptr[j] = (char)48+count;
            j++;
        }
        i++;
    }
    while (j < n)
    {
        ptr[j] = ' ';
        j++;
    }
    

}
int main(){
    char ch[] = "abbcccddddeeeeefff";
    countCharecter(ch);
    cout<<ch;

return 0;
}