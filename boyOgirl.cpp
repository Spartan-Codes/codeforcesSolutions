#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool arr[26];
    for(int i=0; i<26; i++)
    {
        arr[i]=false;
    }
    int count = 0;
    for(char c: s)
    {
        if(arr[c-97] == false)
        {
            count++;
            arr[c-97] = true;
        }
    }
    if(count%2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}