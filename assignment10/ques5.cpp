#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int hasLoop(Node* head) {
    Node* seen[1000] = {NULL};
    int count = 0;

    Node* temp = head;

    while (temp != NULL) {
        for (int i = 0; i < count; i++) {
            if (seen[i] == temp)
                return 1;
        }
        seen[count++] = temp;
        temp = temp->next;
    }

    return 0;
}

int main() {
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();

    n1->data = 1; 
    n2->data = 2; 
    n3->data = 3; 
    n4->data = 4;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2;  // loop

    if (hasLoop(n1))
        cout << "true";
    else
        cout << "false";

    return 0;
}
