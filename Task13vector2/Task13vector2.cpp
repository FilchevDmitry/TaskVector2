#include<vector>
#include <iostream>
using namespace std;
int main()
{
	vector<float> price{ 21.0,15.0,10.0,20.0 };
	vector<int>index{ 1,1,0,3 };
	float sum = 0;
	for (int i = 0; i < index.size(); i++)
	{
		for (int j = 0; j <price.size(); j++)
		{
			if (index.at(i) == j)
				sum += price.at(j);
		}
	}
	cout << sum << endl;
}