#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void)
{
	stack<string> words;
	string in;
	do
	{
		cout << "文字列を入力:";
		getline(cin, in);
		words.push(in);
	} while (in != "");
	while (!words.empty())
	{
		cout << words.top() << endl;;
		words.pop();
	}
	return 0;
}