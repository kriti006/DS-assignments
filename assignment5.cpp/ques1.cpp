#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;

node(int value){
    data=value;
    next=NULL;
}
};

class list{
    public:
node* head;
node* tail;

list(){
    head=tail=NULL;
}

void push(int value){
    node* newnode = new node(value);

    if(head==NULL){
        head=tail=newnode;
        return;
    }else{
        newnode->next = head;
        head= newnode;
    }
}

void print(){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}
};


int main(){
    list ll;
    ll.push(9);
    ll.push(8);
    ll.push(7);
    ll.print();
}


#include<iostream>
using namespace std;

class node{
    public:

int data;
node* next;

node(int value){
    data=value;
    next=NULL;
}
};

class list{
    public:
node* head;
node* tail;
list(){
    head=tail=NULL;
}
void push(int value){
    node* newnode = new node(value);

    if(head==NULL){
        head=tail = newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
}

void print(){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};

int main(){
    list l;
    l.push(9);
    l.push(8);
    l.push(7);
    l.print();
}


#include<iostream>
using namespace std;

class node{
public:    int data;
node* next;

node(int value){
data=value;
next=NULL;
}

};

class list{
public:
node* head;
node* tail;


list(){
head=tail=NULL;
}
void push(int value){
    node* newnode = new node(value);
    if(head==NULL){
head=tail=newnode;

    }else{
        newnode->next=head;
        head=newnode;
    }
    
}

void insrt(int value , int pos){
if(pos<0){
    cout<<"invalid value ";
}
 if(pos ==0 ){
    push(value);
}

node* temp = head;
for(int i =0;i<pos-1;i++){
    temp= temp->next;
}
node* newnode = new node(value);
newnode->next=temp->next;
temp->next = newnode;

}
void pop(){

    if(head==NULL && tail==NULL){
        cout<<"queue is emty ";
    }
node* temp = head;
while(temp->next != tail){
    temp = temp->next;
}
temp->next=NULL;
delete tail;
tail=temp;
}

void print(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

int search(int key){
    node* temp = head;
    int index=0;
while(temp!=NULL){
    if(temp->data == key){
        return index;
    }
    temp = temp->next;
    index++;
}
}

};

int main(){
    list l ;
    l.push(9);
    l.push(7);
    l.push(5);
    l.print();
    l.insrt(1,2);
    l.print();
    int x = l.search(1);
    cout<<"key is find at "<<x<<" index";
}


