#include<bits/stdc++.h>

using namespace std;

int n, m;
int graph[1000][1000];

bool dfs(int x, int y)
{
	// 4) 방문 가능하지 않은 위치라면 0을 리턴한다.
	if(x <= -1 || y <= -1 || x >= n || y >= m)
	{
		return false;
	}
	// 1) 현재 위치가 0이면 해당 위치를 방문처리로 1로 바꾼다.
	if(graph[x][y] == 0) 
	{
		graph[x][y] = 1;
		// 2) 방문처리를 한 후에는 상, 하, 좌, 우를 1)과 같은 방식으로 계속 반복한다.
		dfs(x - 1, y);
		dfs(x , y - 1);
		dfs(x + 1, y);
		dfs(x , y + 1);
		//3) 더이상 반복되지 않으면 1을 리턴한다.
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
