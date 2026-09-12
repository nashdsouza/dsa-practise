#include <iostream>
using namespace std;

int main(){
    int arr[] = {14,43,28,18,4,63,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int x : arr){
        cout << x << " ";
    }
}
