
// c++ headers
#include <iostream>
#include <iomanip>

#include <cstdint>

using namespace std;
/*
this is a comment
*/

int main()
{
	char letter = 'A';
	short shor = 12;
	int integer = 100;
	long longint = 49109119;
	float dec = 2./3;
	double doub = 2./3;
	bool isTrue = false;

	int16_t bits16;
	int32_t bits32;

	int fw = 16;

	std::cout << "char   :" << std::setw(8) << letter <<  " size: " << sizeof(char) << std::endl;
	cout << "short  :" << setw(8) <<  shor << " size: " << sizeof(short) << endl;
	cout << "int    :" << setw(8) <<  integer << " size: " << sizeof(int) << endl;
	cout << "long   :" << setw(8) <<  longint << " size: " << sizeof(long) << endl;
/*
	cout << "float  :" << setw(8) <<  dec << " size: " << sizeof(float) << endl;
	cout << "double :" << setw(8) << doub << " size: " << sizeof(double) << endl;
*/
	cout << "float  :" << setw(8) <<  setprecision(16) << dec << " size: " << sizeof(float) << endl;
	cout << "double :" << setw(8) << setprecision(16) <<  doub << " size: " << sizeof(double) << endl;
	cout << "bool   :" << setw(8) <<  isTrue << " size: " << sizeof(bool) << endl;
    return 0;
}

