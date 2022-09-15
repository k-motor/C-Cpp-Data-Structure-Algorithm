#include<bits/stdc++.h>

using namespace std;

int main(void)
{
	int N, K;
	int result = 0;
	cin >> N >> K;
	
	while( N >= K )  // 3. N이 K와 크거나 같아질 때까지 수행한다.
	{
		while( (N % K) != 0 )  //2. 나누어 떨어지지 않으면 나누어 떨어질 떄까지 -1을 계속해서 뺀다.
		{
			N = N - 1;
			result += 1;  //4. 1~3번이 수행될 때마다 수행횟수를 +1씩 증가시킨다.
		}
		
		N = N / K; // 1. N이 3으로 나누어 떨어지면 K로 나눈다.
		result += 1;  // 4. 1~3번이 수행될 때마다 수행횟수를 +1씩 증가시킨다.
	}
	
	while(N>1)  // 5. 1~3과정을 반복해서 나온 결과값이 1보다 크다면 남은 수에서 -1을 계속해서 뺀다.
	{
		N = N - 1;  // 6. 4번에서 뺀 횟수만큼 수행횟수를 증가시킨다.
		result += 1;
	}
	
	cout << result << '\n';
	
	return 0;
}
