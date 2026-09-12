#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    int maxFreq = mpp[arr[0]];
    int minFreq = mpp[arr[0]];
    int maxElement = arr[0];
    int minElement = arr[0];

    for(auto it : mpp){
        if(it.second > maxFreq){
            maxFreq = it.second;
            maxElement = it.first;
        }
        if(it.second < minFreq){
            minFreq = it.second;
            minElement = it.first;
        }
    }

    cout << "Element " << maxElement << " has max frequency: " << maxFreq << endl;
    cout << "Element " << minElement << " has min frequency: " << minFreq << endl;

    return 0;
}