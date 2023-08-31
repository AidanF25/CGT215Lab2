#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;

	cout << "Hello, My name is Aidan, and I'm going to solve the equation: AX+B =0 for X\n";

	cout << " Please enter a value for A: ";
	cin >> A;
	cout << "A=" << A << endl;

	cout << " Please enter a value for B: ";
	cin >> B;
	cout << "B=" << B << endl;

	cout << "Solving" << A << "x+" << B << "=0 for x. . . \n\n";
	X = ((-1 * B) / A);
	cout << "The answer is x = " << X << endl;
}