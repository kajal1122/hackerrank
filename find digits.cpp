#include<iostream>
using namespace std;
int main()
{
    int t,m,temp,d;
    cin>>t;
    int count;
    for(int i=0; i<t; i++)
    {
        cin>>m;
        temp=m;
        int count=0;
        while(temp > 0)
        {
            d=temp%10;
            if(d==0)
            {
                temp=temp/10;
            }
            else
            {
                if(m%d==0)
                count++;
                temp=temp/10;
            }

        }
        cout<<count<<endl;

    }

    return 0;
}
