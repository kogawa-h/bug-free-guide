#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v1;
	vector<int> v2;
	int i = 0;
	while (true)
	{
	cout << "正の数を入力:";
	cin >> i;
		if (i == -1)break;
		if (i % 2)v2.push_back(i);
		else v1.push_back(i);
	}
	cout << "偶数 ";
	for(vector<int>::iterator x = v1.begin(); x != v1.end(); x++)cout << *x << " ";
	cout <<endl;
	cout << "奇数 ";
	for (vector<int>::iterator y = v2.begin(); y != v2.end(); y++)cout << *y<<" ";
	cout << endl;
	return EXIT_SUCCESS;
}