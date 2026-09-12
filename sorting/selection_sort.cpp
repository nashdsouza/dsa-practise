#include <iostream>
using namespace std;

int main(){
    int arr[] = {25,39,4,18,22,16,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i <= n-2; i++){
        int min = i;
        for(int j = i; j <= n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for(int x : arr){
        cout << x << " ";
    }
}