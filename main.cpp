#include<iostream>
using namespace std ;
int main()
{
    int a , b;
    string S;
    cin>>a>>b;
    cin>>S;
    if (S[a]!='-')
    {
        cout<<"No"<<endl;
        return 0;
    }
    int len = S.length();
    bool ch=0;
    for (int i=0 ; i<len ; i++)
    {
        if((S[i]<'0' || S[i]>'9')&& i!=a)
        {
            ch=1;
        }
    }
    if(ch==0)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
    
}
