#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	int n, m, k;
	vector<int> arr;
	
	cin >> n >> m >> k;
	
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	sort(arr.begin(), arr.end());

	int first = arr[n-1];
	int second = arr[n-2];
	
	int count = 0;
	
	count = m /(k+1) * k;
	count += m % (k+1);
	
	int result = 0;
	result += (count) * first;
	result += (m-count) * second;
	
	cout << result;
}
