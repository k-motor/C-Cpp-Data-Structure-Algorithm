#include<bits/stdc++.h>

using namespace std;

int n, m; 		 // 1) n, m -> MAP의 크기
int x, y; 		 // 2) x, y -> 캐릭터의 현위치
int direction; 	 // 3) direction -> 이동경로

int MAP[50][50]; // 4) MAP[50][50] -> 맵 정보
int d[50][50];   // 5) d[50][50] -> 방문 위치 기록 ( 방문하지 않은 곳만 가기 위함. )

int dx[4] = {-1, 0, 1, 0}; // 6) dx[4] = {-1, 0, 1, 0}; -> 이동경로 x 축 경로
int dy[4] = {0, 1, 0, -1}; // 7) dy[4] = {0, 1, 0, -1}; -> 이동경로 y 축 경로

void turn_left(void)  
{
	direction += -1;
	if(direction < 0)
	{
		direction = 3;
	}
}

int main(void)
{
	cin >> n >> m;

	cin >> x >> y >> direction;
	d[x][y] = 1;	
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			int x;
			cin >> x;
			MAP[i][j] = x;
		}
	}
	
	int cnt = 1;       // 캐릭터가 이동한 횟수  
	int turn_cnt = 0;  // 캐릭터가 회전한 횟수  
	
	while(true)
	{
		turn_left(); // 8) 현재 위치를 기준으로 왼쪽 방향(반시계 방향으로 90도 회전)부터 차례대로 갈 곳을 정한다.
		
		int nx = x + dx[direction];
		int ny = y + dy[direction];
		
		// 9) 캐릭터의 왼쪽 방향에 도착한 적 없는 칸이 있다면, 왼쪽 방향으로 회전하고 왼쪽으로 한 칸 이동한다.
		if(d[nx][ny] == 0 && MAP[nx][ny] == 0)
		{
			d[nx][ny] = 1;
			x = nx;
			y = ny;
			cnt += 1;
			turn_cnt = 0;
			continue;
		}
		else
		{
		    // 10) 왼쪽 방향이 모두 도착했던 칸이라면, 왼쪽 방향으로 회전만 수행하고 1)로 돌아간다.
			turn_cnt += 1;
		}
		
		// 11) 네 방향이 모두 도착했던 칸이거나 바다로 되어 있다면 바라보는 방향만 유지하고 1)로 돌아간다.
		if(turn_cnt == 4)
		{
			nx = x - dx[direction];
			ny = x - dy[direction];
			
			// 12) 단, 뒤쪽 방향이 바다 이거나 뒤로도 갈 수 없다면 움직임을 멈춘다.
			if(MAP[nx][ny] == 0)
			{
				x = nx;
				y = ny;
			}
			else
			{
				break;
			}
			turn_cnt = 0;
		}
	}
	
	cout << cnt << '\n';
	
	return 0;
}
