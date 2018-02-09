#include <iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
class linkedlist{
	node*head;
	node*tail;
	int count;
	public:
		linkedlist(){
			head = NULL;
			tail = NULL;
			count = 0;
		}
		void insert(int val){
			node*temp=new node;
			temp->data=val;
			if(head==NULL){
				head=temp;
				tail=temp;
			}
			else{
				tail->next = temp;
				tail=temp;
				temp->next=NULL;
			}
		}
		int number(){
			node*temp=new node;
			while(temp->next!=NULL){
				count++;
				temp=temp->next;
			}
			return count;
		}
		void partition(int index){
			node*top=new node;
			node*bottom=new node;
			int i,j=0;
			top=head;
			bottom=tail;
			node*pivot=new node;
			pivot=head;
			for(i=1;i<=index;i++){
				pivot=pivot->next;
			}
			while(top->data<=pivot->data){
					top=top->next;
				}
				int track=count-1;
			while(bottom->data>=pivot->data){
				bottom=head;
			for(j=1;j<track;j++){
				bottom = bottom->next;
				track--;
			}	
			}
			int temp = 0;
			if(top->data>bottom->data){
				temp=top->data;
				top->data=bottom->data;
				bottom->data=temp;
			}	
			}
			void quicksort(int piv1,int piv2){
				while(piv1!=1){
					partition(piv1);
					piv1--;
				}
				while(piv2!=count){
					partition(piv2);
					piv2++;
				}
			}
			void display(){
				node*temp=new node;
				while(temp->next!=NULL){
					cout<<temp->data<<" , ";
					temp=temp->next;
				}
				cout<<endl;
			}
		
};
int main(){
	linkedlist ob;
	int i = ob.number();
	ob.insert(1);
	ob.insert(6);
	ob.insert(2);
	ob.insert(9);
	ob.insert(3);
	ob.display();
	ob.quicksort(i/2,i/2);
	ob.display();
  }
