#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arr[100]={0};
    for(int i=0;i<n;i++)
    {
        cin>>m;
        arr[m]++;
    }
    for(int i=0;i<100;i++)
    {
        while(arr[i]> 0)
        {
            cout<<i<<" ";
            arr[i]--;
        }
    }
    return 0;
}
