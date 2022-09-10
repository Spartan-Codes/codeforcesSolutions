#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int hello[5];
    for(int i=0; i<5; i++)
    {
        hello[i]=-1;
    }
    if(s.length()<5)
    {
        cout<<"NO";
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='h'&& hello[0]==-1)
                hello[0]=i;
            else if(s[i]=='e'&& hello[0]!=-1 && hello[1]==-1 && i>hello[0])
                hello[1]=i;
            else if(s[i]=='l'&& hello[1]!=-1 && hello[2]==-1 && i>hello[1])
                hello[2]=i;
            else if(s[i]=='l'&& hello[2]!=-1 && hello[3]==-1 && i>hello[2])
                hello[3]=i;
            else if(s[i]=='o'&& hello[3]!=-1 && hello[4]==-1 && i>hello[3])
                hello[4]=i;
        }
        bool flag = true;
        for(int i=0; i<5; i++)
        {
            if(hello[i]==-1)
                flag = false;
        }
        if(flag)
            cout<<"YES";
        else
            cout<<"NO";

    }
}