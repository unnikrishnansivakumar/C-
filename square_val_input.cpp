/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

double square(double x)
{
	return x*x;
}

void print_square(double x)
{
	cout<<"Square of "<<x<<" is "<<square(x)<<"\n";
}

int main()
{
    double input_val;
	cout<<"What is the value of x? ";
	cin>>input_val;
	print_square(input_val);
	
}