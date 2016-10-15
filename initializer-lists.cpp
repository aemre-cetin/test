#include <iostream>
#include <complex>

using namespace std;
int main()
{

double d1 = 1.1;
double d2{2.3};
double d3 = {2.4};
cout << d3 << endl;

cout << d2 << endl;
complex<double> z2 {d1,d2};
complex<double> z3 = {1,2};

cout << z2 << endl;

int* const a = new int;
int* b = new int;
const int* const c  = new int;


*a = 5;
a = b;



}
