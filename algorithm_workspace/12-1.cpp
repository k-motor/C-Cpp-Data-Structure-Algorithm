#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &arr, int target, int start, int end);

int n, m;

vector<int> arr; // N���� ��ǰ ��ȣ 
vector<int> targets; // M���� ��ǰ ��ȣ 

int main(void)
{
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	// ���� Ž���� ���� ���� 
	sort(arr.begin(), arr.end());
	
	cin >> m;
	for(int i=0; i<m; i++)
	{
		int target;
		cin >> target;
		targets.push_back(target);
	}
	
	for(int i=0; i< m; i++)
	{
		// �ش� ��ǰ�� �����ϸ� -1�� ��ȯ���� ���� 
		int result = binarySearch(arr, targets[i], 0, n-1); 
		if(result != -1) 
		{
			cout << "yes" << ' ';
		}
		else
		{
			cout << "no" << ' ';
		}
	}
}

/*
*���� Ž�� ���� 
*/
int binarySearch(vector<int> &arr, int target, int start, int end)
{
	while( start <= end) // ���� ã�� ������ �ݺ� 
	{
		int mid = (start + end)/2; // �߰��� �ε��� 
		if(arr[mid] == target) return mid; // ã�� ���� �߰� ���̸� ��ȯ 
		else if(arr[mid] > target) end = mid - 1;  // ã�� ���� �߰� �� ���� ������ end�� �߰��� -1 �� ���� 
		else start = mid + 1; // ���� �ݴ�� start ���� �߰��� + 1�� ���� 
	}
	return -1; // ã�µ� �����ϸ� -1 
}
