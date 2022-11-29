#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    
     // 3 1 2
    int idxmin=0;
    for (int i=0 ; i< n-1 ; i++)
    {
         idxmin=i;
        
        for (int j= i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[i])// 1 3
            {
                idxmin=j; //1
                swap(arr[idxmin] , arr[i]); // 1 3 2
            }
        }
    }
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
