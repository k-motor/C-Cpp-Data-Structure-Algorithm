#include<bits/stdc++.h>

using namespace std;

int n, m; 		 // 1) n, m -> MAP�� ũ��
int x, y; 		 // 2) x, y -> ĳ������ ����ġ
int direction; 	 // 3) direction -> �̵����

int MAP[50][50]; // 4) MAP[50][50] -> �� ����
int d[50][50];   // 5) d[50][50] -> �湮 ��ġ ��� ( �湮���� ���� ���� ���� ����. )

int dx[4] = {-1, 0, 1, 0}; // 6) dx[4] = {-1, 0, 1, 0}; -> �̵���� x �� ���
int dy[4] = {0, 1, 0, -1}; // 7) dy[4] = {0, 1, 0, -1}; -> �̵���� y �� ���

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
	
	int cnt = 1;       // ĳ���Ͱ� �̵��� Ƚ��  
	int turn_cnt = 0;  // ĳ���Ͱ� ȸ���� Ƚ��  
	
	while(true)
	{
		turn_left(); // 8) ���� ��ġ�� �������� ���� ����(�ݽð� �������� 90�� ȸ��)���� ���ʴ�� �� ���� ���Ѵ�.
		
		int nx = x + dx[direction];
		int ny = y + dy[direction];
		
		// 9) ĳ������ ���� ���⿡ ������ �� ���� ĭ�� �ִٸ�, ���� �������� ȸ���ϰ� �������� �� ĭ �̵��Ѵ�.
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
		    // 10) ���� ������ ��� �����ߴ� ĭ�̶��, ���� �������� ȸ���� �����ϰ� 1)�� ���ư���.
			turn_cnt += 1;
		}
		
		// 11) �� ������ ��� �����ߴ� ĭ�̰ų� �ٴٷ� �Ǿ� �ִٸ� �ٶ󺸴� ���⸸ �����ϰ� 1)�� ���ư���.
		if(turn_cnt == 4)
		{
			nx = x - dx[direction];
			ny = x - dy[direction];
			
			// 12) ��, ���� ������ �ٴ� �̰ų� �ڷε� �� �� ���ٸ� �������� �����.
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
