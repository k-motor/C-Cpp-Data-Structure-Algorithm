#include <bits/stdc++.h>

using namespace std;

// 1) �ð�, ��, �ʸ� �Է¹޾� 10���� ���� �������� 3�̰ų�
// 10���� ���� ���� 3�̸� 1�� ��ȯ�ϰ�
// �׷��� ������ 0�� ��ȯ�ϴ� �Լ��� �����.
bool check(int h, int m, int s)
{
	if( (h % 10 == 3) || (m % 10 == 3) || (s % 10 == 3) 
	 || (h / 10 == 3) || (m / 10 == 3) || (s / 10 == 3))
	{
		return true;
	}

	return false;
}

int main(void)
{
	int N;
	int count = 0;
	cin >> N;
	
	// 2) ���� �ݺ����� �̿��ؼ� ��� ����� ���� ����� 1)�� �Է��� �ִ´�.
	for(int i=0; i<=N; i++)
	{
		for(int j=0; j<60; j++)
		{
			for(int k=0; k<60; k++)
			{
				// 3) 1)�� ������ �����ϸ� count�Ͽ� 3�� ���Ե� ��� ����� ���� ����Ѵ�.
				if(check(i,j,k)) count++;
			}
		}
	}
	
	cout << count << '\n';
}

