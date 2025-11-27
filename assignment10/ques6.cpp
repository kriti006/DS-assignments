#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to check duplicates using hash set
bool hasDuplicate(Node* root, unordered_set<int>& seen) {
    if (root == nullptr)
        return false;

    // If value already exists, duplicate found
    if (seen.count(root->data))
        return true;

    // Insert value in hash set
    seen.insert(root->data);

    // Check in left and right subtree
    return hasDuplicate(root->left, seen) || hasDuplicate(root->right, seen);
}

int main() {
    // Create a sample binary tree
    Node* root = new Node{1, nullptr, nullptr};
    root->left  = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->right->left = new Node{2, nullptr, nullptr};  // Duplicate value

    unordered_set<int> seen;

    if (hasDuplicate(root, seen))
        cout << "Duplicates Found";
    else
        cout << "No Duplicates";

    return 0;
}
