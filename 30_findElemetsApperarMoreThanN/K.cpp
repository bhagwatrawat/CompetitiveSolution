#include <bits/stdc++.h>
using namespace std;

void moreThanNdK(int * arr,int size, int k){
    int res=0;
    unordered_map<int,int> s;
    int num=size/k;
    for(int i=0;i<size;i++){
        s[arr[i]]+=1;
        if(s[arr[i]]==num){
            res++;
        }
    }
cout<<res;
}

int main()
{
    
    int arr1[] = { 4, 5, 6, 7, 8, 4, 4 };
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int k = 3;
    moreThanNdK(arr1, size, k);
 
    return 0;
}