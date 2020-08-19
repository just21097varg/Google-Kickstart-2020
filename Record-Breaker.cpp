#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s;
    cin>>t;
    s=t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        if(n==1)
          cout<<"Case #"<<(s-t)<<": 1"<<endl; 
        else{  
        int c=0,m=v[0];
        if(v[0]>v[1])
        {
            c++;
            m=v[0];
        } 
        for(int i=1;i<n-1;i++)
           if(v[i]>m && v[i]>v[i+1])
           {
               c++;
               m=v[i];
           }
        if(v[n-1]>m)
          c++;
        cout<<"Case #"<<(s-t)<<": "<<c<<endl;   
        }
    }
    return 0;
}
