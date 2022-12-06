#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n ;
     int a[n];
    bool odd=0;
    for (int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            odd=1;
            cout<<0<<endl;
            return 0;
        }
    }
    int count =0;
    int result=0;
    while (result ==0)
    {
    for (int j=0 ; j<n ; j++)
    {
        result = a[j]%2; //2 // 3 // 10
        if (result==0)
        {
            a[j]=a[j]/2;
        }
        else if(result!=0)
        {
            break;
        }
        
    }
        if(result ==0)
        {
        count++; //1 //2
        }
    }
    cout<<count<<endl;
}
