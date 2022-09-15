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
	
	//1. A �������� ����
	sort(a.begin(), a.end());
	//2. B �������� ����
	sort(b.begin(), b.end(), cmp);
	
	//3. K �� �� �迭�� ���� �ٲٴ� �ݺ��� ����
	for(int i=0; i<k; i++)
	{
		//4. A�� B���� ũ�ų� ������ �ݺ��� ����
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
	
	//5. A�迭�� ��� ���� ���ϰ� ���
	for(int i=0; i<n; i++)
	{
		result += a[i];
	}
	
	cout << result << '\n';
	
}
