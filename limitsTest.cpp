#include<iostream>
#include<limits>

using namespace std;

int main(int argc, char* argv[]){
	cout << "size of int is: " << sizeof(int) << endl;
	cout << "size of long int is: " << sizeof(long int) << endl;
	cout << "size of float is: " << sizeof(float) << endl;
	cout << "size of double is: " << sizeof(double) << endl;
	cout << "size of long double is: " << sizeof(long double) << endl;
	cout << endl;
	cout << "Minimum value for int is: " << numeric_limits<int>::min() << endl;
	cout << "Maximum value for int is: " << numeric_limits<int>::max() << endl;
	cout << "Minimum value for long int is: " << numeric_limits<long int>::min() << endl;
	cout << "Maximum value for long int is: " << numeric_limits<long int>::max() << endl;
	cout << "Minimum value for float is: " << numeric_limits<float>::min() << endl;
	cout << "Maximum value for float is: " << numeric_limits<float>::max() << endl;
	cout << "Minimum value for double is: " << numeric_limits<double>::min() << endl;
	cout << "Maximum value for double is: " << numeric_limits<double>::max() << endl;
	cout << "Minimum value for long double is: " << numeric_limits<long double>::min() << endl;
	cout << "Maximum value for long double is: " << numeric_limits<long double>::max() << endl;
	cout << endl;

return 0;
}
