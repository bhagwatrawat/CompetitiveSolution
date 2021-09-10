    #include<bits/stdc++.h>
    using namespace std;

    struct Node{
    int data;
    Node *next;
    };
    Node *head;

    void removeDuplicates(Node *head)
{
 // your code goes here
 Node * temp=head;
 
 while(temp->next!=NULL){
     if(temp->data==temp->next->data){
         Node * val=temp->next;
         temp->next=val->next;
     }
     else{
         temp=temp->next;
     }
 }
 
}
    int main(){
    int n;
    cin>>n;
    head=NULL;
    Node * temp=new Node();
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        
        if(head==NULL){
            temp->data=x;
            temp->next=NULL;
            head=temp;
        }
        else{
            Node * temp1=new Node();
            temp1->data=x;
            temp1->next=NULL;
            temp->next=temp1;
            temp=temp1;
        }
    }
    removeDuplicates(head);
    Node * temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    return 0;
    }