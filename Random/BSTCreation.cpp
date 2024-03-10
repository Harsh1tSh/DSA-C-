#include<iostream>
#include<vector>
using namespace std;


class Node{
    public:
        int key;
        Node *left;
        Node *right;

        Node(int key){
            this->key=key;
            left = right = NULL;
        }
};


Node * insert(Node*root, int key){

    if(root==NULL){
        return new Node(key);
    }

    // rec case
    if(key < root->key){
        root->left = insert(root->left,key);
    }
    else{
        root->right = insert(root->right,key);
    }
    return root;
}


bool search(Node *root, int key){

    if(root==NULL){
        return false;
    }
    if(root->key==key){
        return true;
    }
    if(key < root->key){
        return search(root->left,key);
    }
    return search(root->right,key);
}


void printInOrder(Node *root){

    if(root==NULL){
        return;
    }
    printInOrder(root->left);
    cout << root->key << " ";
    printInOrder(root->right);
}

Node *findMin(Node * root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

//BST deletion
Node* remove(Node *root, int key){

    // below part is moslty for searching
    if(root==NULL){
        return NULL;
    }
    else if(key < root->key){
        root->left=remove(root->left,key);
    }
    else if(key > root->key){
        root->right=remove(root->right,key);
    }
    // Now comes the actual part here the deletion will be done
    else{
        //When the current node matches with the key
        //1- No children
        if(root->left==NULL and root->right==NULL){
            delete root;
            root = NULL;
        } 
        // Single child
        else if(root->left==NULL){
            Node *temp=root;
            root = root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node *temp=root;
            root = root->left;
            delete temp;
        }
        //2 children
        else{
            Node *temp= findMin(root->right);
            root->key=temp->key;
            root->right=remove(root->right , temp->key);
        }
    }
    return root;
}

// print all the elements in range
void printRange(Node * root, int k1, int k2){
    if(root==NULL){
        return;
    }

    if(root->key>=k1 and root->key<=k2){
        // call on both sides
        printRange(root->left,k1,k2);
        cout<<root->key<<" ";
        printRange(root->right,k1,k2);
    }
    else if(root->key > k2){
        printRange(root->left,k1,k2);
    }
    else{
        printRange(root->right,k1,k2);
    }
}

// Print the path to reach leaf node
// this is for binary tree
void printRoot2Leaf(Node* root, vector<int> &path){
    if(root==NULL){
        return;
    }
    if(root->left == NULL and root->right==NULL){
        for (int i: path) {
            cout << i << "->";
        }
        cout << root->key << " ";
        cout << endl;
        return;
    }

    path.push_back(root->key);
    printRoot2Leaf(root->left, path);
    printRoot2Leaf(root->right,path);
    path.pop_back();
    return;
}


int main(){
    Node *root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};

    for(int x : arr){
        root = insert(root,x);
    }

    printInOrder(root);

    // int key;
    // cin >> key;
    //cout << search(root,key) << endl;
    // root = remove(root,key);
    // printInOrder(root);
    // cout << endl;
    // printRange(root,5,12);


    // Yeh sala binary tree ke liye hai
    // vector<int> path;
    // printRoot2Leaf(root,path);
    return 0;
}





// for(int i=0;i<n;i++){
//     arr[i] == key;
//     delete arr[i];
// }

// // binary search for a key
// s=0;
// e=n;
// while(s<=e){
//     m=(s+e)/2;
//     if(arr[m]==key){
//         return m;
//     }
//     else if(arr[m]<key){
//         s = m +1;
//     }
//     else{
//         e = m-1;
//     }
// }
// return -1;

