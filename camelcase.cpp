#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len=str.length();
    int count=1;
    for(int i=0; i<len; i++)
    {
        if(isupper(str[i])==true)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
