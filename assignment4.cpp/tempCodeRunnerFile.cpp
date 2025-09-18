#include<iostream>
using namespace std;
class queue{
int arr[100];
int front , rear;

public:
queue(){
    front = rear =-1;
}

void enqueue(int x){
    if( rear == 99){
        cout<<"queue is full ";
    }else if(front == -1){
        front =0;

  
    }
      arr[++rear]=x;
}    

void dequeue(){
    if(front == -1){
        cout<<"queue is empty ";
    }
    front++;
}

void print(){
    if(front == -1 || front > rear){
        cout<<"queue is empty";
    }

    for(int i =front ; i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main(){
queue q;
q.enqueue(3);
q.enqueue(4);
q.enqueue(5);
q.enqueue(36);
q.dequeue();
q.print();
q.dequeue();
q.enqueue(9);
q.print();
}

