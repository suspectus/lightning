
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main()
{
    using namespace std;

    string word;
    vector<string> wordArray;

    cout << "Type '.' to finish" << endl;
    while (cin >> word && word != ".")
    {
        wordArray.push_back(word);
    } 

    cout << endl << "Now to sort the words" << endl;
    sort(wordArray.begin(), wordArray.end());

    for (auto const& w : wordArray)
    {
        cout << w << endl;
    }
}
