#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int Xmax=-101,Xmin=101,Ymax=-101,Ymin=101;
        int xd,yd;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin>>x>>y;
            if(x==0)
            {
                Ymax=max(Ymax,y);
                Ymin=min(Ymin,y);
            }
            if(y==0)
            {
                Xmax=max(Xmax,x);
                Xmin=min(Xmin,x);
            }
        }
        if(Xmax<0 && Xmin<0)
        {
            xd=2*abs(Xmin);
        }
        else if(Xmax>0 && Xmin>0)
        {
            xd=2*Xmax;
        }
        else if(Xmax==0 && Xmin==0)
            xd=0;
        else
        {
            xd=2*Xmax+2*abs(Xmin);
        }

        if(Ymax<0 && Ymin<0)
        {
            yd=2*abs(Ymin);
        }
        else if(Ymax>0 && Ymin>0)
        {
            yd=2*Ymax;
        }
        else if(Ymax==0 && Ymin==0)
            yd=0;
        else
        {
            yd=2*Ymax+2*abs(Ymin);
        }
        cout<<xd+yd<<endl;
    }
}