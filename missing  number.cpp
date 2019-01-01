#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arrold[n];
    for(int i=0; i<n; i++)
    {
        cin>>arrold[i];
    }
    cin>>m;
    int arrnew[m];
    for(int i=0;i<m;i++)
    {
        cin>>arrnew[i];
    }
    sort(arrold,arrold+n);
    sort(arrnew,arrnew+m);
    vector<int> num;
    int j=0;
    for(int i=0;i<m;i++)
    {
        if(arrnew[i]==arrold[j])
        {
            j++;
        }
        else
        {
            num.push_back(arrnew[i]);

        }
    }
    int len=num.size();
    set<int> s;
    for(int i=0; i<len; i++)
    {
        s.insert(num[i]);
    }
    for(auto i=s.begin(); i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}



