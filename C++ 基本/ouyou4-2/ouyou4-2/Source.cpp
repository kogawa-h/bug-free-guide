#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v1;

	int i = 0;
	while (true)
	{
		cout << "正の整数を入力:";
		cin >> i;
		if (i == -1)break;
		 v1.push_back(i);
	}
	int max=-1;
	int min=*v1.begin();

	for (vector<int>::iterator x = v1.begin(); x != v1.end(); x++) {

		if (max < *x)max = *x;
		if (min > *x)min = *x;
	}

		cout << "最大値 " << max  << endl;
		cout << "最小値 " << min << endl;
	
	return EXIT_SUCCESS;
}