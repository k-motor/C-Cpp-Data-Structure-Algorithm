#include <bits/stdc++.h>

using namespace std;

// 1) 시간, 분, 초를 입력받아 10으로 나눈 나머지가 3이거나
// 10으로 나눈 몫이 3이면 1을 반환하고
// 그렇지 않으면 0을 반환하는 함수를 만든다.
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
	
	// 2) 삼중 반복분을 이용해셔 모든 경우의 수를 만들어 1)의 입력을 넣는다.
	for(int i=0; i<=N; i++)
	{
		for(int j=0; j<60; j++)
		{
			for(int k=0; k<60; k++)
			{
				// 3) 1)의 조건을 만족하면 count하여 3이 포함된 모든 경우의 수를 출력한다.
				if(check(i,j,k)) count++;
			}
		}
	}
	
	cout << count << '\n';
}

