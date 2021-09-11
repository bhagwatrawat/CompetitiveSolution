#include <bits/stdc++.h> 
 using namespace std; 
 struct Node {
     int data;
     Node * left;
     Node * right;
 };
 Node * createBst(vector<int> pre,stack<Node *> & s){
     int i =0 ;
     Node * t;
     Node * root=new Node();
     root->data=pre[i++];
     root->left=root->right=NULL;
     Node * p=root;
     while(i<pre.size()){
         if(pre[i]<p->data){
             t=new Node();
             t->data=pre[i++];
             t->left=t->right=NULL;
             p->left=t;
             s.push(p);
             p=t;
         }
         else if(pre[i]>p->data && (s.empty() || (s.top())->data>pre[i]) ){
             
                     t=new Node();
                    t->data=pre[i++];
                    t->left=t->right=NULL;
                    p->right=t;
                    p=t;
            
            
         }
         else{
           
            
             p=s.top();
             s.pop();
         }
     }
     return root;
 }
 void inorder(Node * root){
     if(root!=NULL){
         inorder(root->left);
         cout<<root->data<<" ";
         inorder(root->right);
     }
 }
 int main(){
     vector<int> pre={10, 5, 1, 7, 40, 50};

     stack<Node *> s;
     int i=0;
     Node * root= createBst(pre,s);
     inorder(root);
     
 }