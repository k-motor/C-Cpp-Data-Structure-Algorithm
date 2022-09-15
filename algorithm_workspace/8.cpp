#include<bits/stdc++.h>

using namespace std;

int n, m;
int graph[1000][1000];

bool dfs(int x, int y)
{
	// 4) �湮 �������� ���� ��ġ��� 0�� �����Ѵ�.
	if(x <= -1 || y <= -1 || x >= n || y >= m)
	{
		return false;
	}
	// 1) ���� ��ġ�� 0�̸� �ش� ��ġ�� �湮ó���� 1�� �ٲ۴�.
	if(graph[x][y] == 0) 
	{
		graph[x][y] = 1;
		// 2) �湮ó���� �� �Ŀ��� ��, ��, ��, �츦 1)�� ���� ������� ��� �ݺ��Ѵ�.
		dfs(x - 1, y);
		dfs(x , y - 1);
		dfs(x + 1, y);
		dfs(x , y + 1);
		//3) ���̻� �ݺ����� ������ 1�� �����Ѵ�.
		return true;
	}
	return false;
}

int main(void)
{
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%1d", &graph[i][j]);
		}
	}
	
	int result = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(dfs(i, j))
			{
				result +=1;
			}
		}
	}
	
	cout << result << '\n';	
}
