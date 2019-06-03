#include <bits/stdc++.h>
using namespace std;
struct node
{int a;
struct node *next;
};

int length(struct node *root)
{
    struct node *tmp;
    tmp=root;
    int len=0;
    while(tmp!=NULL)
    {
        len++;
        tmp=tmp->next;
    }
    return len;

}
struct node* insertate(struct node *root,int a)
        {
   struct  node *current ,*tmp;
   tmp=(struct node *)malloc(sizeof(struct node));
   tmp->a=a;
   tmp->next=NULL;
   current = root;
    if (root == NULL)
    {
        root=tmp;
    }
    else
        {
        while (current->next != NULL)
            current = current->next;
        current->next = tmp;
       }
    return root;
}
struct node* insertatb(struct node *root,int a)
{
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node*));
    tmp->a=a;
    tmp->next=root;
    return tmp;

}
struct node* insertatm(struct node *root,int a,int i)
{
    struct  node *current ,*tmp,*p;
    int c=0,m=0,len=length(root);
    if(len<i)
        cout<<"insufficient length of list for insertion at loc:"<<i<<endl;
    else {
        i--;//so that we insert the value at the position and dont iterate over that position
        tmp = (struct node *) malloc(sizeof(struct node));
        tmp->a = a;
        tmp->next = NULL;
        current = root;
        if (i == -1) {
            tmp->next = root;
            root = tmp;
        } else {
            while (current->next != NULL && c < i) {
                current = current->next;
                c++;
            }
            p = current->next;
            current->next = tmp;
            tmp->next = p;
        }
    }
    return root;
}
struct node * deletee(struct node * root,int ele)
{struct node * curr;
curr= root;
int m=0;
if(root->a==ele)
{
    root=root->next;
    m=1;
}
else
{
    while(curr->next != NULL && m == 0)
    {
        if (curr->next->a == ele)
        {
            m = 1;
            curr->next = curr->next->next;//deleting the element
        }
        else
        curr = curr->next;//go to the next element only if element not found so that if last element deleted then it does not go to NULL_>next which is not possible hence is a runtime error
    }
}
if(m==0)
    cout<<"element not found"<<endl;
return root;
}

struct node * deletei(struct node * root,int i)
{struct node * curr;
    curr= root;
    int m=0,c=0;
    if(length(root)<=i)
    {
        cout << "Deletion not possible at loc:" << i << endl;
        m = 1;
    }
    else  if(i==0)
    {
        root=root->next;
        m=1;
    }
    else
    {i--;
        while(curr->next != NULL && c<i)
        {
            curr = curr->next;
            c++;
        }
        curr->next = curr->next->next;
        m=1;
    }
    return root;
}




void print(struct node *root)
{struct  node *current ;
int c=0;
   current=root;
    while(current!=NULL)
{
        cout <<current->a << " ";
        c++;
        current=current->next;
    }
    cout<<endl;
}
int main()
{
    struct node *root=NULL;
    root=insertatb(root,145);
    root= insertate(root,5);
    root= insertate(root,7);
    root=insertate(root,8);
    root=insertatb(root,10);
    root=insertatm(root,45,0);
    //cout<<"length of linked list="<<length(root)<<endl;
    print(root);
   root=deletei(root,3);
    print(root);


}