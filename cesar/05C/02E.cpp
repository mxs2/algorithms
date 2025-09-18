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

/* Solution */

Node* remove(Node* root, int data) {
    if (root == nullptr) {
        return root;
    }
    if (data < root->data) {
        root->left = remove(root->left, data);
    } else if (data > root->data) {
        root->right = remove(root->right, data);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = root->right;
        while (temp && temp->left != nullptr) {
            temp = temp->left;
        }
        root->data = temp->data;
        root->right = remove(root->right, temp->data);
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

int main() {
    Node* root = nullptr;
    int values[] = {50, 30, 70, 20, 40, 60, 80};

    for (int value : values) {
        root = insert(root, value);
    }

    root = remove(root, 20);
    cout << "After removing 20 (no children): ";
    inorder(root);
    cout << endl;

    root = remove(root, 30);
    cout << "After removing 30 (one child): ";
    inorder(root);
    cout << endl;

    root = remove(root, 50);
    cout << "After removing 50 (two children): ";
    inorder(root);
    cout << endl;

    cout << "Final inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}