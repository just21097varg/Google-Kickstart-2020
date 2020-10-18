#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int d=1;
    while(d<=t)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        } 
        long long int m=0;
        for(int i=0;i<n;i++)
        {
            long long int j=0,k=i,s1=0,s2=0;
            while(j<n && k<n)
            {
                s1=s1+a[j][k];
                s2=s2+a[k][j];
                k++;
                j++;
            }
            if(s1>m)
              m=s1;
            if(s2>m)
              m=s2;
        }
        cout<<"Case #"<<d<<": "<<m<<endl;
        d++;
    }
}
