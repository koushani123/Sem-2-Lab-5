#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n){//taking array and size of array as input
	int i,j,k,temp = 0;
	for(i=0;i<n;i++){//Controls number of cycles of sort
		for(j=0;j<n-1;j++){//Controls number of swappings
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				}
		}
	}
	for(k=0;k<n;k++){//Displaying sorted array
		cout<<arr[k]<<",";
	}
	cout<<endl;
}
int main(){
	int n,i,in,k = 0;
	int arr[] = {0};
	cout<<"Enter the number of elements in an array\n";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter value\n";
		cin>>in;
		arr[i]=in;
	}
	cout<<"This is the sorted array\n";
	BubbleSort(arr,n);//calling function to sort array
	
}
