// sort an array of zeros ones and twos

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int first=0;
    int middle=1;
    int last=n-1;
    int i=0;
    while(i<=last){
        
        if(arr[i]==0){
            swap(arr[i],arr[first]);
            first++;
            middle++;
            i++;
        }
        else if(arr[i]==1){
            middle++;
            i++;
        }
        else{
            swap(arr[i],arr[last]);
            last--;
        }
    }
   
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
