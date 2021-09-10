//  Find the elements occuring maximum times in the array with the help of moose algo ;

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int size)
{
    
    // your code here
    int me=arr[0];
    int count=1;
    
    
    for(int i=1;i<size;i++){
        if(arr[i]==me){
            count ++;
        }
        else {
            count --;
            if(count ==0){
                me=arr[i];
                count =1;
            }
        }
        
    }
    int x=0;
    for(int i=0;i<size;i++){
        if(arr[i]==me){
            x++;
        }
    }
    if(x>size/2) {
        return me;
    }
    else return -1;
    
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=majorityElement(arr,n);
    cout<<res<<endl;


}