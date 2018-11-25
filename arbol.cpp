#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* root = NULL;

Node* createNode(int data){
    Node* n = new Node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void addNode(Node* &curr, int data) {
    if(curr == NULL) {
        curr = createNode(data);
    } else if(data < curr->data) {
        addNode (curr->left, data);
    } else if(data > curr->data) {
        addNode(curr->right, data);
    } else {
        cout << "El valor \"" << data << "\" ya ha sido añadido." << endl;
    }
}

void printTree(Node* Ptr) {
    if(root != NULL) {
        if(Ptr->left != NULL) {
            printTree(Ptr->left);
        }
        
        cout << Ptr->data << " ";

        if(Ptr->right != NULL) {
            printTree(Ptr->right);
        }
    } else {
        cout << "El árbol está vacío" << endl;
    }
}

void main() {
    int data[4] = {1, 7, 5, 4};

    for(int i = 0; i < 4; i++) {
        addNode(root, data[i]);
    }

    printTree(root);

    system("PAUSE");
}