#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left,*right;
};
struct node * newnode(int item)
{
    struct node *temp =(struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
struct node * insert(struct node* node,int key)
{
    if(node==NULL)
        return newnode(key);
    else if(key<node->key)
        node->left =insert(node->left,key);
    else
        node->right=insert(node->right,key);
    return node;
}
struct node* search(struct node* root,int se)
{
    if(root->key==se||root == NULL)
        return root;
     if(root->key>se)
        search(root->left,se);

        search(root->right,se);
}
using namespace std;
int main()
{

    struct node* root= NULL;
    struct node * t=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,42);
    insert(root,57);
    inorder(root);
    t= search(root,30);
    if(t)
        cout<<"element found";
    else
        cout<<"not found";
    //t=search(root,30);
    //t=search(root,10);
}