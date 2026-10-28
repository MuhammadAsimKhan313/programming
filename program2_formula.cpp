#include <iostream>
using namespace std;
int main()
{
    float vi,a,t,s;
    cout<<"Enter initial velocity (vi):"<< endl;
    cin>>vi;
    cout<<"Enter acceleration (a):"<< endl;
    cin>>a;
    cout<<"Enter time (t):"<< endl;
    cin>>t;
    s = vi*t + 0.5*a*t*t;

    cout<<"Displacement (s):"<<s;
    return 0;
}