#include<bits/stdc++.h>

using namespace std;

int n, m;

set<int> binary_tree; // N개의 부품 번호 --> 균형 이진 트리 Set 컨테이너 
vector<int> targets;  // M개의 부품 

int main(void)
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		binary_tree.insert(x);  // 균형이진트리는 숫자를 넣으면 알아서 정렬됨. 
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
		// find 함수를 통해 값이 있는지 Search 
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
