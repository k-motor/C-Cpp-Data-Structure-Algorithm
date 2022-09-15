#include <bits/stdc++.h>

using namespace std;

int n, m;
int graph[201][201];

/*이동 경로 ( 상, 하, 좌, 우 )*/
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int x, int y)
{
	//전형적인 BFS 사용 방법인 Queue 자료구조를 사용한다. 
	queue<pair<int, int> > q;
	q.push({x, y});
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		//1) 상하 좌우 검색
		for(int i=0; i<4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			//2) 이동 가능한 영역인지 판단
			if(nx < 0 || nx >= n || ny < 0 || ny >= m)
			{
				continue;
			}
			
			//2) 이동 가능한 영역인지 판단
			if(graph[nx][ny] == 0)
			{
				continue;
			}
			
			//3) 이동 가능 구역이면 현재 위치 값 + 1 로 경로값 갱신
			if(graph[nx][ny] == 1)
			{
				graph[nx][ny] = graph[x][y] + 1;
				q.push({nx, ny});
			}
		}
	}
	
	//4) 1~3 반복 후 미로의 끝 (n, m)의 경로값 출력
	return graph[n - 1][m - 1];
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
	
	cout << bfs(0, 0) << '\n';
	
	return 0;
}
