class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i = 0; i < n; i++) {
           int min = i;
           for(int j = i + 1; j < n; j++) {
                if(arr[j] < arr[min])
                    min = j;
           }
           int temp = arr[i];
           arr[i] = arr[min];
           arr[min] = temp;
         // swap(arr[i],arr[min]);
       }
    }
};
//////////////////////////////////////////////////////////////// vs code edition
#include<iostream>
void selectionsort(int arr[],int n){
	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i;j<=n-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}	
}
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<=n;i++){
		cin>>arr[i];
	}
	selectionsort(arr,n);
}
