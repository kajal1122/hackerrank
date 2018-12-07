#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arr[100]={0};
    int range=0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        arr[m]++;
    }

    for(int i=0;i<100;i++)
    {
        cout<<arr[i]<<" ";
        range=range+arr[i];
        if(range > n)
        {
             break;
        }
    }

    return 0;
}
