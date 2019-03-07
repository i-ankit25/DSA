#include <bits/stdc++.h>
using namespace std;
#define ll long long 

#define MOD 1000000007
ll power(ll x,ll y,ll m); 
ll modInverse(ll a, ll m) 
{ 
             ll x= power(a, m-2, m);
             return (x)%m;
 } 
ll power(ll x, ll  y, ll  m=1000000007) 
{   
   ll res=1;
   x%=m;
   
   while(y>0)
   {
       if(y&1)
       {
           res=res*x%m;
           res%=m;
       }
       y/=2;
       x*=x%m;
       x%=m;
       
   }
   return res%m;
} 
int main()
{
    ll n,k,m,num,den,t,i;
    cin>>t;
    while(t--)
    {
        
        cin>>n>>k>>m;
    if(n==1)
    {
        cout<<"1"<<endl;
    continue;
    }
     if(m&1)
    {
       // num=(pow(n,(m+1)/2))%1000000007  - pow(n-1,(m+1)/2))%1000000007;
        
        num=(((power(n,(m+1)/2)%1000000007 - power(n-1,(m+1)/2)  )  %1000000007  )+1000000007) %1000000007;
        den=power(n,(m+1)/2) %1000000007;
        
             //  cout<<num<<" "<<den<<endl;
         cout<<(num  *   modInverse(den,1000000007)) %1000000007<<endl;
         continue;
    }
    else
    {
       // num=((pow(n,(m)/2)*(n+k))%1000000007 - (pow(n-1,(m)/2)*(n+k-1))%1000000007  + 1000000007)%1000000007;
       
      // num=  ((  (power(n,m/2)*(n+k) %1000000007 )+1000000007)%1000000007  - (power(n-1,(m)/2)*(n+k-1)  ) +1000000007) %1000000007;
       
         
       num=  (   (power(n,m/2)*(n+k) %1000000007 )  - ((power(n-1,m/2) *(n+k-1) %MOD  )  ) +MOD    ) %MOD;
     //  ll num1= %MOD;
       
       num= (num+MOD)%MOD;
        den=(power(n,m/2)*(n+k)  ) %1000000007 ;
        
              // cout<<num<<" "<<den<<endl;
        
         cout<<(num*modInverse(den,MOD))%MOD <<endl;
        
      //cout<<num<<" "<<den<<endl;
    }
   /*for(i=2;i<=num;i++)
    {
       while(num%i==0&&den%i==0)
        {
            num=num/i;
            den=den/i;
        }
        }*/

  //cout<<(num*modInverse(den,1000000007))%1000000007<<endl;
    }
}
