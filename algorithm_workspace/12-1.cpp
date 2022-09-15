#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &arr, int target, int start, int end);

int n, m;

vector<int> arr; // N개의 부품 번호 
vector<int> targets; // M개의 부품 번호 

int main(void)
{
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	// 이진 탐색을 위한 정렬 
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
		// 해당 부품이 존재하면 -1을 반환하지 않음 
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
*이진 탐색 수행 
*/
int binarySearch(vector<int> &arr, int target, int start, int end)
{
	while( start <= end) // 값을 찾을 때까지 반복 
	{
		int mid = (start + end)/2; // 중간값 인덱스 
		if(arr[mid] == target) return mid; // 찾는 값이 중간 값이면 반환 
		else if(arr[mid] > target) end = mid - 1;  // 찾는 값이 중간 값 보다 작으면 end를 중간점 -1 로 변경 
		else start = mid + 1; // 위와 반대면 start 값을 중간값 + 1로 변경 
	}
	return -1; // 찾는데 실패하면 -1 
}
