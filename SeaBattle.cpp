#include<iostream>
using namespace std;

int main()
{
    int w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    if(w1==w2)
    {
        cout<<w1+2+w2+2+2*h1+2*h2;
    }
    else
    {
        cout<<w1+2+w2+2+2*h1+2*h2 +(w1-w2-1) +1;
    }
}