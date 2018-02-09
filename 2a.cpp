#include <iostream>
using namespace std;
int partition(int arr[],int left,int right){//to divide array into two compartments around pivot
	int i,j,temp=0;
	i = left;
	j = right;
	int pivot = arr[(left+right)/2];//choosing pivot
	while(i<=j){
		while(arr[i]<pivot)
		i++;//moving to element of array greater in value than pivot
		while(arr[j]>pivot)
		j--;//moving to element in array belonging to the right that is lesser than pivot in value
	}
	if(i<=j){
		temp = arr[i];
		arr[i] = arr[j];//Values are swapped. Smaller value goes to left partition while larger one goes to the right.
		arr[j] = temp;
		i++;
		j--;
	}
	return i;
}
void quicksort(int arr[],int left,int right,int n){
	int index = partition(arr,left,right);//partition function is called
	int i = 0;
	if(left<index-1){
		quicksort(arr,left,index-1,n);//left partition is sorted as function recurs
	}
	if(index<right){
		quicksort(arr,index,right,n);//right partition is sorted as function recurs
	}
	cout<<"Sorted array is : \n";
	for(i=0;i<n;i++){
		cout<<arr[i]<<" , ";//Printing sorted array
	}
	cout<<endl;
}
int main(){
	int arr[] = {0};
	int in,n,i=0;
	cout<<"Enter the number of elements in array\n";
	cin>>n;
	cout<<"Enter the elements in array\n";
	for(i=0;i<n;i++){
		cin>>in;
		arr[i] = in;
	}
	quicksort(arr,0,n-1,n);
	
}
