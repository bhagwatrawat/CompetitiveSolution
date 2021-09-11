#include <bits/stdc++.h> 
 using namespace std; 
 struct Node {
     int data;
     Node * left;
     Node * right;
 };
 Node * storeNode(vector<Node *> & x,Node * root){
     if(root!=NULL){
         storeNode(x,root->left);
         x.push_back(root);
         storeNode(x,root->right);
     }
 }
 Node * buildbalancedbst(Node * root, vector<Node *> & x,int s,int e){
     if(s<=e){
         int mid = (s+e)/2;
         Node * root=x[mid];
         root->left=buildbalancedbst(root->left,x,s,mid-1);
         root->right=buildbalancedbst(root->right,x,mid+1,e);
        return root;
     }
     return NULL;
 }
 Node * buildBst(Node * root){
     vector<Node *> x;
     storeNode(x,root);
     int w=x.size();
    return  buildbalancedbst(root,x,0,w-1);
 }
 Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
void preorder(Node * root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        
        preorder(root->right);
    }
}
 int main(){
      Node* root = newNode(10);
    root->left = newNode(8);
    root->left->left = newNode(7);
    root->left->left->left = newNode(6);
    root->left->left->left->left = newNode(5);

   root= buildBst(root);
   preorder(root);
 
} 