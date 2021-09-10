    #include<bits/stdc++.h>
    using namespace std;
    // Program to reverse a linked list 

    struct Node{
    int data;
    Node *next;
    };

    Node *head;
    
    Node * reverseList(Node * temp){
        Node * head1=NULL;
        while(temp!=NULL){
            Node *  temp1=temp->next;
            temp->next=head1;
            head1=temp;
            temp=temp1;
        }
        return head1;
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
    Node * temp1=reverseList(head);
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    return 0;
    }