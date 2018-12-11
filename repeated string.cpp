#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    long long n,q,pro;
    cin>>n;
    int count=0;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='a')
            count++;
    }
    if(n==len)
    {
        cout<<count;
    }
    if(n%len==0)
    {
        q = n/len;
        pro=q*count;
        cout<<pro;
    }
    int count1=0;
   if(n%len!=0)
    {
        int  rem=n%len;
         q=n/len;
        for(int i=0;i<rem;i++)
        {
            if(str[i]=='a')
                count1++;
        }

        pro=q*count;
        cout<<(pro+count1);
    }

    return 0;
}
