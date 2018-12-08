#include<iostream>
using namespace std;
int main()
{
    int v,n,m,temp;
    cin>>v>>n;
    int arr[n];
    for(int i=0; i<n ;i++)
    {
        cin>>m;
        if(m==v)
            temp=i;
        arr[i]=m;
    }
    cout<<temp;

    return 0;
}
