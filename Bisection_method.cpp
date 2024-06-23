
#include<bits/stdc++.h>
using namespace std;
#define EPS 0.01
double func(double x)
{
	return x*x-4*x-10;
}

void bisection(double a, double b)
{
	if (func(a) * func(b)>=0)
	{
		cout << "I am not assumed right a and b\n";
		return;
	}

	double c=a;
	while ((b-a)>=EPS)
	{
		c = (a+b)/2;

		if (func(c)==0.0)
			break;

		else if (func(c)*func(a)<0)
			b=c;
		else
			a=c;
	}
	cout << "The value of root is : " << c;
}

int main()
{
	double a=-2,b=-1;
	bisection(a,b);
	return 0;
}
