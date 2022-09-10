#include<iostream>
using namespace std;

int main()
{
    pair <string, int> p4,p6,p8,p12,p20;
    p4 = make_pair("Tetrahedron",4);
    p6 = make_pair("Cube",6);
    p8 = make_pair("Octahedron",8);
    p12= make_pair("Dodecahedron",12);
    p20 = make_pair("Icosahedron", 20);
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(p4.first==s)
        {
            sum+=p4.second;
        }
        else if(p6.first==s)
        {
            sum+=p6.second;
        }
        else if(p8.first==s)
        {
            sum+=p8.second;
        }
        else if(p12.first==s)
        {
            sum+=p12.second;
        }
        else
        {
            sum+=p20.second;
        }
    }
    cout<<sum;
}