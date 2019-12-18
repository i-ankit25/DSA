#include<bits/stdc++.h>
using namespace std;
int segtr[1000000];
int query(int l,int r,int n)
{
    int re=0;
    for(l+=n,r+=n;l<r;l>>=1,r>>=1)
    {
        if(l&1)
        re+=segtr[l++];
        if(r&1)
        re+=segtr[r--];
    }
    return re;
}
void update(int i,int v,int n)
{
    
    segtr[i+n]=v;
    i+=n;
    for(int j=i;j>1;j>>=1)
    segtr[i>>1]=segrt[i]+segtr[i^1];
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    segtr[i+n]=a[i];
    for(i=n-1;i>=0;i--)
        segtr[i]=segtr[i<<1]+segtr[i<<1|1];
    cout<<query(1,3,5);
