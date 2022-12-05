#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int minn= INT_MAX;
    int maxx= INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        minn= min(minn , a[i]);
        maxx= max(maxx, a[i]);
        
    }
    int posmax;
    int posmin;
    for (int i=0 ; i<n ; i++)
    {
        if(a[i]==maxx)
            posmax=i;
        else if(a[i]==minn)
            posmin=i;
    }
    int temp;
    temp= a[posmax];
a[posmax]= a[posmin];
a[posmin]=temp;
    
    for (int k=0 ; k<n ; k++)
    {
        cout<<a[k]<<" ";
    }
}


