#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array : ";
cin>>n;

int arr[n];
cout<<"enter the array : "<<endl;
for(int i =0;i<n;i++){
    cin>>arr[i];
}
cout<<"Array : ";
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}

for(int i =0;i<n-1;i++){
    int si = i;
    for(int j =i+1;j<n;j++){
        if(arr[j]<arr[si]){
            si=j;
        }
    }

    int temp=arr[si];
    arr[si]=arr[i];
    arr[i]=temp;
}
cout<<"ARRAY AFTER SELECTION SORT : "<<endl;
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}
}