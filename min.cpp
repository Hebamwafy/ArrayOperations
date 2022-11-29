#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long A[n];
    long long min=10000;
    int index=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>A[i];
       
        if(A[i]<min)
        {
            min =A[i];
            index =i;
        }
    }
    cout<<min<<" "<<1+index<<endl;
  
}
