#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    int arr[n];
cout<<"enter the array : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
cout<<"ARRAY : "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i =0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;

        cout<<"Pass "<<i<<": ";
        for(int k=0; k<n; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
cout<<"ARRAY AFTER INSERTION SORT : ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}