#include<bits/stdc++.h>

using namespace std;

int N; // N�� �Է¹ޱ�
string routes;

int x = 1, y = 1;

// L, R, U ,D ��� 
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'}; 

int main(void)
{
	cin >> N; // ���� ũ�� �ޱ� 
	cin.ignore(); // �Է� ���� ����
	getline(cin, routes); // �Է� ��� �ޱ� 
	
	for(int i=0; i<routes.size(); i++) // ��� �����ŭ �ݺ� 
	{
		char route = routes[i]; // L R U D ��θ� �޾ƿ�. 
		int nx = -1, ny = -1;  // �̵� ��ǥ 
		for(int j=0; j<4; j++)
		{
			if(route == moveTypes[j])
			{
				nx = x + dx[j];  // �̵��� ��ġ ��� ( ���� ��ġ + ���) 
				ny = y + dy[j];
			}
		}
		
		// ������ ��� ��ǥ��� ����
		if(nx < 1 || ny < 1 || nx > N || ny > N )
		{
			continue;
		}
		
		x = nx;  // �̵��� ��ġ�� ���� ��ġ�� ������. 
		y = ny;
	}
	
	cout << x << ' ' << y << '\n';
	return 0; 
}
