    #include<bits/stdc++.h>
    using namespace std;

    struct Node{
    int data;
    Node *next;
    };
    Node *head;
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node * temp1=head;
        Node * temp2=head;
        Node * res=NULL;
        // first find the if loop is present
        while(temp1->next!=NULL && temp2->next!=NULL && temp2->next->next!=NULL){
            if(temp1->next==temp2->next->next){
                temp1=temp1->next;
                res=temp1;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
       
        if(res==NULL) return;
        int n=1;
        // calculate the length of loop
        while(temp1->next!=res){
            n++;
            temp1=temp1->next;
        }
    
        Node * f=head;
        Node * s=head;
        // traverse upto the length of loop
        for(int i=0;i<n;i++){
            f=f->next;
        }
        // run till s != f;...to find the junction;
        while(s!=f){
            s=s->next;
            f=f->next;
        }
        // find the last node of loop and make its next to nULL ;
        for(int i=0;i<n-1;i++){
            f=f->next;
        }
        f->next=NULL;
        
        return ;
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
    Node * temp1=head;
    removeLoop(head);
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    return 0;
    }