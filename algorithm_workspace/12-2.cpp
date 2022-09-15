#include<bits/stdc++.h>

using namespace std;

int n, m;

set<int> binary_tree; // N���� ��ǰ ��ȣ --> ���� ���� Ʈ�� Set �����̳� 
vector<int> targets;  // M���� ��ǰ 

int main(void)
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		binary_tree.insert(x);  // ��������Ʈ���� ���ڸ� ������ �˾Ƽ� ���ĵ�. 
	}
	
	cin >> m;
	
	for(int i=0; i<m; i++)
	{
		int target;
		cin >> target;
		targets.push_back(target);
	}
	
	for(int i=0; i<m; i++)
	{
		// find �Լ��� ���� ���� �ִ��� Search 
		if(binary_tree.find(targets[i]) != binary_tree.end())
		{
			cout << "yes" << ' ';
		}
		else
		{
			cout << "no" << ' ';
		}
	}
} 
