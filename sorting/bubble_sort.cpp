#include <iostream>
using namespace std;

int main(){
    int arr[] = {14,43,28,18,4,63,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i <= n-2; i++){
        for(int j = 0; j <= n-2-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int x : arr){
        cout << x << " ";
    }
}