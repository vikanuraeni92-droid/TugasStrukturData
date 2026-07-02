#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* buatNode(int data) {
    Node* baru = new Node();
    baru->data = data;
    baru->left = NULL;
    baru->right = NULL;
    return baru;
}

void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    Node* root = buatNode(10);
    root->left = buatNode(5);
    root->right = buatNode(15);

    cout << "Preorder: ";
    preorder(root);

    return 0;
}