#include <iostream>
using namespace std;
struct node{//creating data structure of node type
	int data;
	node*next;
};
class linkedlist{//creating class for list
	node*head;
	node*tail;
	public:
		linkedlist(){
			head = NULL;
			tail = NULL;
		}
		void insert(int value){//inserting elements
			node*temp = new node;
			temp->data = value;
			if(head == NULL){
				head = temp;
				tail = temp;
				temp->next = NULL;
			}
			else{
				tail->next = temp;
				tail = temp;
				temp->next = NULL;
			}
		}
			void display(){
			node*temp = new node;
			temp = head;
			while(temp!=NULL){
				cout<<temp->data;
				temp = temp->next;
			}
		}
		void BubbleSort(){
			node*curr = new node;
			node*prev = new node;
			node*timekeep = new node;//to keep track of number of cycles of sort
			int temp = 0;
			curr = head;
			timekeep = head;
			while(timekeep!=NULL){
			
			while(curr!=NULL){
				prev = curr;
				curr = curr->next;
				if(prev->data>curr->data){//comparing values
					temp = prev->data;
					prev->data = curr->data;//swapping values
					curr->data = temp;
				}
			}
			timekeep = timekeep->next;
		}
		display();//to display sorted linked list
		}
	
};
int main(){
	int val,in,i,j = 0;
	linkedlist ob;
	while(j!=9){
		cout<<"Enter 1 to add element to linked list or press 2 to exit\n";
		cin>>i;
		if(i==1){
			cout<<"Enter value\n";
			cin>>val;
			ob.insert(val);
		}
		if(i==2){
			j=9;
		}
	}
	cout<<"This is the sorted list\n";
	ob.BubbleSort();
}
