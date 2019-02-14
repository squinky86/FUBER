/*
 * Copyright © 2018–2019, Jon Hood www.hoodsecurity.com
 * License: ISC
 */

#include <complex>
#include <iostream>

using namespace std;

complex<double> divide(complex<double> a, complex<double> b)
{
	if ((real(b) == 0.0) && (imag(b) == 0.0))
		throw "Division by Zero";
	return a/b;
}

int main(int argc, char *argv[])
{
	//build two complex numbers
	complex<double> a(1.0, 2.0); //1+2i
	complex<double> b(0.0, 0.0); //0+0i

	//divide by 0+0i
	complex<double> c(0.0, 0.0);
	try
	{
		c = divide(a, b);
	}
	catch (const char* msg) //empty catch block needs documentation on why it's ignored
	{
	}

	//print out result
	cout << "Division by 0: " << c << endl;
	return 0;
}
