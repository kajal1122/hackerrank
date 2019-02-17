#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
#include<sstream>
#include<set>
#include<ctime>
using namespace std;
string birthdaygenerator()
{


    int day=rand()%28+1;
    int month=rand()%12+1;
    ostringstream birthday;
    birthday<<day;
    ostringstream birthmonth;
    birthmonth<<month;
    string birthdate=birthday.str() +" "+  birthmonth.str();
    return birthdate;

}
int birthdayparadox(int numppl, int numexp=10)
{
    int cntsucces=0;
    for(int i=0; i<numexp; i++)
    {
        vector<string> birthdays;
        for(int j=0; j<numppl; j++)
        {
            birthdays.push_back(birthdaygenerator());

        }
        //check if any two birthday are same;
        set<string>uniquebirth(birthdays.begin(),birthdays.end());
        if(birthdays.size()-uniquebirth.size())cntsucces+=1;


    }
    return cntsucces;
}
int main()
{
    srand(int(time(0)));
    int numExperiments=20;
    for(int i=5; i<=100; i+=5)
    {
        int numPeople=i;
        cout<<"For " << numPeople <<" people "<<numExperiments<< " experiments were run."<<endl;
        cout<<"two or more people have same birthdays " << birthdayparadox(numPeople,numExperiments) <<" times"<<endl;

    }
    cout<<endl;

}

