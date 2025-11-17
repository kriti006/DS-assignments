#include<iostream>
using namespace std;
void swap(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
}
int parttion(int arr[],int low,int high){
    int pivot=arr[high];
    int i =low-1;

    for (int j =low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quicksort(int arr[],int low, int high){
    if(low<high){
        int pi=parttion(arr, low, high);

                cout << "After partition with pivot index " << pi << ": ";
        for (int k = 0; k <= high; k++)
            cout << arr[k] << " ";
        cout << endl;

        
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1,high);
    }
}
int main(){
int n;
cout<<"Enetr the size of array : ";
cin>>n;
int arr[n];


for(int i =0;i<n;i++){
    cin>>arr[i];
}

cout<<"ORIGINAL ARRAY : ";

for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
    
}

cout<<endl;

quicksort(arr, 0,n-1);

cout<<"sorted aray : ";

for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
    
}

cout<<endl;


}