#include <bits/stdc++.h>
using namespace std;

int countSquares(int N) {
        // code here
        int res=0;
        for(int i=1;i*i<N;i++){
            if(i*i<N){
                res++;
            }
        }
        return res;
    }

int main(){
 int n;
 cin>>n;
 int res=countSquares(n);
 cout<<res<<endl;
}