#include <bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(int *arr, int n) {
         long long sum=n*(n+1)/2;
        long long product=1;
        long long asum=0;
        long long aproduct=1;
        for(int i=0;i<n;i++){
         asum+=arr[i];
         product*=(i+1);
         aproduct*=arr[i];
        }
        int ymx=asum-sum;
        int  ybx=(aproduct/product);
        int mis=ymx/(ybx-1);
        int repeat=ymx+mis;
        vector<int > res;
        res.push_back(repeat);
        res.push_back(mis);
        return res;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res(2);
    res=findTwoElement(arr,n);
    cout<<res[0]<<" "<<res[1];
}