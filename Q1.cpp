#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,t;
    cin>>t;
    while(t--)
    {
    cin>>x>>y;
     if(y%x!=0) {
        int month = y/x;
        cout<<month<<endl;
    }
    else
    {
        int month = y/x-1;
        cout<<month<<endl;
        
    }
    }

}