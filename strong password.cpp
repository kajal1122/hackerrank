#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=4;
    bool upper=false;
    bool lower=false;
    bool num=false;
    bool spcl=false;
    string special_characters = "!@#$%^&*()-+";
    for(int i=0; i<n; i++)
    {
        if(isupper(s[i]))
        {
            upper=true;
        }
        if(islower(s[i]))
        {
            lower=true;
        }
        if(isdigit(s[i]))
        {
            num=true;
        }
        for(int j=0; j<11; j++)
        {
            if(s[i]==special_characters[j])
            {
                spcl=true;
            }
        }

    }
    if(upper==true)
    {
        count=count-1;
    }
    if(lower==true)
    {
        count=count-1;
    }
    if(num==true)
    {
        count=count-1;
    }
    if(spcl==true)
    {
        count=count-1;
    }
    int temp=n+count;
    if(temp>= 6)
    {
        cout<<count;
    }
    else
    {
        cout<<(6-n);
    }
    return 0;
}
