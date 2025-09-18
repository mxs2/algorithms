#include <iostream>
#include <cstddef>

using namespace std;

struct Node {
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
};

Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return newNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = nullptr;
    int values[] = {40, 20, 60, 10, 30, 50, 70};

    for (int value : values) {
        root = insert(root, value);
    }

    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal of the BST: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal of the BST: ";
    postorder(root);
    cout << endl;

    return 0;
}