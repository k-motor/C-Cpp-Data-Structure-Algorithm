#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a, b;

bool cmp(int x, int y)
{
	return x > y;
}

int main(void)
{
	cin >> n >> k;
	
	for(int i=0; i<n;i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	
	for(int i=0; i<n;i++)
	{
		int x;
		cin >> x;
		b.push_back(x);
	}
	
	//1. A 오름차순 정렬
	sort(a.begin(), a.end());
	//2. B 내림차순 정렬
	sort(b.begin(), b.end(), cmp);
	
	//3. K 번 두 배열의 수를 바꾸는 반복문 수행
	for(int i=0; i<k; i++)
	{
		//4. A가 B보다 크거나 같으면 반복문 종료
		if(a[i] < b[i])
		{
			swap(a[i], b[i]);
		}
		else
		{
			break;
		}
	}
	
	long long result = 0;
	
	//5. A배열의 모든 값을 더하고 출력
	for(int i=0; i<n; i++)
	{
		result += a[i];
	}
	
	cout << result << '\n';
	
}
