#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    string s2;
    s2="SOS";
    string s3;
    int len2=3;
    while(len2 <len)
    {
        s3=s3+s2;
        len2=s3.length();
    }
    int count=0;
    if(s=="SOS")
    {
        cout<<0<<endl;
    }
    else
    {
      for(int i=0; i<len; i++)
      {
            if(s[i]!=s3[i])
            {
                count++;
            }
     }
    cout<<count<<endl;
    }


   return 0;
}
