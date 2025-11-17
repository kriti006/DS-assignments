#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void improved_selection_sort(int arr[],int n){
    int start =0;
    int end=n-1;

    while(start<end){
        int max = start;
        int min = start;

        for(int i =start;i<=end;i++){
            if(arr[i]<arr[min]){
                min=i;
            }

            if(arr[i]>arr[max]){
                max=i;
            }

            
        }

        swap(arr[start],arr[min]);

        if(max==start){
            max=min;
        }

        swap(arr[end],arr[max]);
       
        printArray(arr, n);
        start++;
        end--;
    }
}
int main(){
int arr[]={20,5,9,1,7,13,12};
int n = sizeof(arr)/sizeof(arr[0]);

improved_selection_sort(arr, n);

cout<<"sorted array by ipmroved method : "<<endl;
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}
}