#include <bits/stdc++.h>
using namespace std;

int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int res;
        return res=A>max(B,C)? max(B,C): B>max(A,C)? max(A,C): C>max(A,B)?max(A,B) : -1;
    }

int main(){
 int A,B,C;
 cin>>A>>B>>C;
 int res=middle(A,B,C);
 cout <<res;
 return 0;
}