//Author Pavel
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;
struct Node  *temp;

void push(int data){

    temp=(struct Node*)malloc(sizeof(struct Node*));



    if(temp==NULL){
        cout<<"Overflow"<<endl;

    }
    else{
        temp->data=data;
        temp->next=head;
        head=temp;
    }

}


struct  Node* reverse(struct Node *head){
   struct Node *temp=NULL;
      struct Node *temp2=NULL;



      while(head!=NULL){

            temp2=head->next;
            head->next=temp;
            temp=head;
            head=temp2;


      }

      head=temp;

      return head;



}
void display(struct Node* temp){

    struct Node* t=head;


    while(t!=NULL){
        cout<<t->data<<endl;
        t=t->next;


    }

}


int main()
{
    
    int t;
    cin>>t;

    while(t--){

        push(1);
        push(2);
        push(3);
        push(4);

        cout<<"print the linkedlist"<<endl;
        display(head);
        cout<<"print the  reverse linkedlist"<<endl;
       head= reverse(head);
        display(head);


    }


    return 0;
}


//tutorial https://www.youtube.com/watch?v=XgABnoJLtG4&ab_channel=NesoAcademy