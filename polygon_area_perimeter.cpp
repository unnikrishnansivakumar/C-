#include<iostream>
using namespace std;

int area(int s)
{
	return 3.14*s*s;
}

int main()
{
	int side;
	cout<<"Enter the side length of the figure:"<<endl;
	cin>>side;
	cout<<"area of the figure is: "<<area(side);
	system("pause");
	return 0;	
}