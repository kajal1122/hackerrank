#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int q;
    cin>>q;
    string s,s2;
    for(int i=0;i<q;i++)
    {
        cin>>s;
        int len=s.length();
        int arr[len];
        int arr1[len];
        for(int i=0; i<len-1; i++)
        {
                int a=int(s[i]);
                int b=int(s[i+1]);
                int diff;
                if(b>a)
                     diff=b-a;
                else
                    diff=a-b;
                arr[i]=diff;
        }
        reverse(s.begin(),s.end());
        s2=s;
        for(int i=0; i<len-1; i++)
        {
                int a=int(s2[i]);
                int b=int(s2[i+1]);
                int diff;
                if(b>a)
                     diff=b-a;
                else
                     diff=a-b;
                arr1[i]=diff;
        }
        bool valid=true;
        for(int i=0;i<len-1;i++)
        {
            if(arr[i]!=arr1[i])
            {
                valid=false;
            }
        }
        if(valid==false)
        {
            cout<<"Not Funny"<<endl;
        }
        else
        {
            cout<<"Funny"<<endl;
        }


    }

    return 0;
}
