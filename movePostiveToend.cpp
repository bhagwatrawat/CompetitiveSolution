// Move all positive numbers to end and all negative to beginning

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int last=n-1;
    for(int i=0;i<n;i++){
        if(i==last) break;
        if(arr[i]>=0){
            swap(arr[i],arr[last]);
            last--;
            i--;
        }
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}