#include<iostream>
using namespace std;
// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//output : 1 2 4 5 7 3 6
// Inorder : 4 2 7 5 1 3 6
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = right = NULL;
        }
};

Node* bulidTree(){
    int d;
    cin >> d;
    if(d==-1){
        return NULL;
    }

    Node * n = new Node(d);
    n->left = bulidTree();
    n->right = bulidTree();
    return n;
}
//DFS : preorder, postorder, inorder
void printPreorder(Node * root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInOrder(Node * root){
    if(root == NULL){
        return;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);

}

void printPostOrder(Node * root){
    if(root == NULL){
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node * root=bulidTree();
    cout << "In Order traverseal : " ;
    printInOrder(root);
    cout << endl;
    cout << "Pre Order Traversal : " ;
    printPreorder(root);
    cout <<endl;
    cout << "Post Order Traversal : " ;
    printPostOrder(root);
}