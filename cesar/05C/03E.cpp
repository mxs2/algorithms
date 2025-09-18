#include <iostream>

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

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

/* Solution */

bool search(Node* root, int data) {
    if (root == nullptr) {
        return false;
    }
    if (root->data == data) {
        return true;
    } else if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

int main() {
    Node* root = nullptr;
    int values[] = {50, 30, 70, 20, 40, 60, 80};

    for (int value : values) {
        root = insert(root, value);
    }

    /* Solution */

    int searchValues[] = {60, 25, 40};
    for (int n : searchValues) {
        if (search(root, n)) {
            cout << "Valor " << n << " encontrado" << endl;
        } else {
            cout << "Valor " << n << " NAO encontrado" << endl;
        }
    }

    return 0;
}