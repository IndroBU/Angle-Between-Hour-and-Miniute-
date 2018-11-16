/// God is Almighty
#include<bits/stdc++.h>
using namespace std;
int angle(double h, double m)
{
    if(h>12 || m>60 || h<0 || m<0)
    {
        printf("Wrong Input\n");
    }
    if(h==12) h=0;
    if(m==60) m=0;
    int   hour_angle=0.5*(60*h+m);
    int  miniute_angle=6*m;
    int  angle=abs(hour_angle-miniute_angle);
    angle=min((360-angle),angle);
    return angle;
}
int main()
{
    int t;
    double h,m;
    cin>>t;
    ios_base::sync_with_stdio(false);
    while(t--)
    {
        cin>>h>>m;
        cout<<angle(h,m)<<endl;
    }
    return 0;
}

