#include<iostream>
using namespace std;
int main()
{
    int n,temp,temp2;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        int x=i;
        for(int j=1; j<=n; j++)
        {
            if(arr[j]==x)
            {
                temp=j;
            }
        }
        for(int k=1; k<=n; k++)
        {
            if(arr[k]==temp)
            {
                temp2=k;
            }
        }
        cout<<temp2<<endl;
    }

    return 0;
}
