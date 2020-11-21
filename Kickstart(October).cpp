#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int d=1;
    while(d<=t)
    {
        string s;
        cin>>s;
        int k=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='K')
            {
                if(s.size()-i<4)
                  break;
                string s1=s.substr(i,4);
                if(s1=="KICK")
                {
                    
                    k++;
                    i=i+2;
                }
            }
            else if(s[i]=='S')
            {
                if(s.size()-i<5)
                  break;
                string s1=s.substr(i,5);
                if(s1=="START")
                {
                    c=c+k;
                    i=i+4;
                }
            }
        }
        cout<<" Case #"<<d<<": "<<c<<endl;
        d++;
    }
}
