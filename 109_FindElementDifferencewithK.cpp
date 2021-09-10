#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,k;
    cin>>x>>k;
    int i=0;
    while(i<n){
        if(arr[i]==x){
            cout<<i;
            return 0;
        }
        i=i+max(1,abs(arr[i]-x)/k);
    }
    cout<<-1;
    return 0;
}