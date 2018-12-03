#include<iostream>
using namespace std;
int main()
{
    int arr[101]={0};
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        arr[m]++;
    }
    int max=0;
    for(int i=1; i<n-2;i++)
    {
        if (max < arr[i]+arr[i+1])
        {
            max=arr[i]+arr[i+1];
        }
    }
    cout<<max<<endl;
    return 0;

}
