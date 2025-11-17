#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the size of array : ";
    cin>>n;

    int arr[n];
int count=0;
cout<<"enter the array : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
cout<<"array : "<<endl;
        for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i =0;i<n-1;i++){
        count++;
        for(int j =0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"total no of iterations : "<<count;
cout<<endl<<"AFTER BUBBLE SORT ARRAY : "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}