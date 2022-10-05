#include<bits/stdc++.h>
using namespace std;

class node{

public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left= NULL;
        right = NULL;
    }
};

void printLO(node* root){
    queue<node*> q;
    
    q.push(root);
    while(!q.empty()){

        cout<<q.front()->data<<" ";
        if (q.front()->left != NULL)
        {
        q.push(q.front()->left); 
        }
        
        if(q.front()->right != NULL){
          q.push(q.front()->right);  
        }
        
        q.pop();
    }
    return;
}

int main(){
    node * root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    printLO(root);
    return 0;
}
