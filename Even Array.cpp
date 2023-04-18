#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n];
        int i,even=0,odd=0,fine=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if( (a[i]%2)%2==(i%2)%2){fine++;}
            else if( (a[i]%2)%2==1){odd++;}
            else {even++;}
        }
        if(odd!=even){cout<<-1<<"\n";}
        else cout<<even<<"\n";
    }



    return 0;
}

