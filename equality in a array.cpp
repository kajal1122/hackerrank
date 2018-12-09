#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=1;
    int max=0;
    int maxindex;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            if(max < count)
                {
                    max=count;
                    maxindex=i;
                }
        }
        else
        {
            count=1;
        }

    }
    if(max==0)
    {
        cout<<n-1<<endl;
    }
    else
    {
         cout<<n-max<<endl;
    }

    return 0;
}
