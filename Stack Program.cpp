#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};
struct node *head;
struct node *temp;
void Pop(){
}
void Display(){
	
	struct node *ptr=head;
	
	if(ptr==NULL){
		cout<<"LINKEDLIST IS EMPTY"<<endl;
	}else{
				cout<<"LINKEDLIST IS :"<<endl;

		while(ptr!=NULL){	
		int d=ptr->data;
			cout<<d<<endl;
			ptr=ptr->next;
		}
	}
}
void Push(){
	int data;
	struct node *ptr=(struct node*)malloc((sizeof(struct node*)));
	
	if(ptr == NULL){
		cout<<"OVERFLOW"<<endl;
	}else{
				cout<<"Enter The data : "<<endl;
				cin>>data;
				
				ptr->data=data; 
				ptr->next=head;
				head=ptr;
	}
}

int main(){
		
	while(1){
				
	int op;
	cout<<"1. PUSH"<<endl<<"2. POP"<<endl<<"3. Display"<<endl;
	
	cin>>op;
	
	
	switch(op){
		case 1: Push();
				break;
		case 2: Pop();
				break;
		case 3: Display();
				break;
		case 4: exit(1);
		
		default: cout<<"CHOOSE A VALID OPTION"<<endl;		
	}
	
	}
		return 0;
}



