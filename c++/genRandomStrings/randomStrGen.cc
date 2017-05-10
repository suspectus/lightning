#include<string>
#include<vector>
#include<iostream>
#include<cstdlib>

extern std::string random_string(size_t length);

int main()
{
	using namespace std;
	const int nRandomStrings = 20;
	const int randomStringLen = 20;
	vector<string> strings;

	// generate strings
	for (int n = 0; n < nRandomStrings; ++n)	
	{
		strings.push_back(random_string(randomStringLen));
	}
	
	// output strings
	for (const auto &s : strings)
	{
		cout << s << endl;
	}
}
