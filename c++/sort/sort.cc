#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
#include<map>

int main()
{
	using namespace std;

	vector<std::string> names 
	{ 	
		"mike", "james", "david", "toby", "ryan", "james",
		"james", "dan", "david", "david", "dan"
	};

	cout << "Team names" << endl;	
	for (auto &n: names)
		cout << n << endl;

	cout << endl << "Now sorted" << endl;	
	sort(begin(names), end(names));

	for (auto &n: names)
		cout << n << endl;

	cout << endl << "Unique names" << endl;	
	set<string> uniqueNames(begin(names), end(names));
	for (auto &n: uniqueNames)
		cout << n << endl;

	map<string, int> countedNames;
	for (auto &n: names)
	{
		if (!countedNames.count(n))
			countedNames[n] = 1;
		else
			++countedNames[n];
	}

	cout << endl << "Count occurence of names" << endl;	
	for (auto &name: countedNames)
		cout << name.first << ":" << name.second << endl;
}
