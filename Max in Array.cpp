#include <iostream>
using namespace std;

int main() {
    int arr[10]= {7,6,-132,64,-30};
    int size=10;
    int max=arr[0];
    for(int i=1; i<size; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Max number is "<< max<<endl;
    return 0;
}