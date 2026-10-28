#include <iostream>
using namespace std;
int main()
{int vf,vi,a,s;
cout<<"Enter final velocity (vf):"<< endl;
cin>>vf;
cout<<"Enter initial velocity (vi):"<< endl;
cin>>vi;
cout<<"Enter acceleration (a): "<< endl;
cin>>a;
s = (vf*vf-vi*vi)/(2*a);
cout<<"Displacement (s) ="<< s ;
return 0;
}
