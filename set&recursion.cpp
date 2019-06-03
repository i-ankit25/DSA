#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<ll> st; 
void ans(ll c,ll a,ll b,ll n)
{ 
    if(n==1)
    st.insert(c);
    else
    {//cout<<c<<" ";
    n=n-1;
        ans(c+a,a,b,n);
        ans(c+b,a,b,n);
    }
}
int main()
{
   ll t,n,a,b,s,c=0;
   cin>>t;
   set<ll> emp;
   set<ll>::iterator it1;
   while(t--)
   {
       cin>>n>>a>>b;
       ans(c,a,b,n);
        for (it1 = st.begin(); it1!=st.end();  ++it1) 
        cout << *it1 << " "; 
        st=emp;
       cout<<endl;
   }
}