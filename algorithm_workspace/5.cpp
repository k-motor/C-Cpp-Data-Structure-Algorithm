#include<bits/stdc++.h>

using namespace std;

int N; // N을 입력받기
string routes;

int x = 1, y = 1;

// L, R, U ,D 경로 
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'}; 

int main(void)
{
	cin >> N; // 공간 크기 받기 
	cin.ignore(); // 입력 버퍼 비우기
	getline(cin, routes); // 입력 경로 받기 
	
	for(int i=0; i<routes.size(); i++) // 경로 사이즈만큼 반복 
	{
		char route = routes[i]; // L R U D 경로를 받아옴. 
		int nx = -1, ny = -1;  // 이동 좌표 
		for(int j=0; j<4; j++)
		{
			if(route == moveTypes[j])
			{
				nx = x + dx[j];  // 이동한 위치 계산 ( 현재 위치 + 경로) 
				ny = y + dy[j];
			}
		}
		
		// 공간을 벗어난 좌표라면 무시
		if(nx < 1 || ny < 1 || nx > N || ny > N )
		{
			continue;
		}
		
		x = nx;  // 이동한 위치로 현재 위치를 갱신함. 
		y = ny;
	}
	
	cout << x << ' ' << y << '\n';
	return 0; 
}
