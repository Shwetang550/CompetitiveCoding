#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[n],f[101]{0};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }

    for(int i=0; i<101; i++)
    {
        if(f[i]/2>=1) //&& f[i]!=0)
        {
            c+=f[i]/2;   
        }    
    }

    cout<<c;
    return 0;
}
