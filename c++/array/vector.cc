#include<iostream>
#include<vector>

int main()
{
	using namespace std;

	std::vector<int> squares = {1,4,9,16,25,36,49,64,81,100};
	for (auto n: squares)
		cout << n << " ";
	cout << endl;
}
	
