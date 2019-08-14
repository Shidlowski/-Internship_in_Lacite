#include <iostream>
#include "Calc.h"
using namespace std;

int main()
{
	float a,b;
    cout<<"Calculator"<<endl;
    cout<<"Enter number one: ";
    cin>>a;
    cout<<"Enter number two: ";
    cin>>b;

    cout<<"\n SUM:  "<<sum(a,b);
    cout<<"\n DIFFERENCE:  "<<difference(a,b);
    cout<<"\n MULTIPLY:  "<<multiply(a,b);
    cout<<"\n DIVIDED: "<<divided(a,b)<<endl;
	return 0;
}
