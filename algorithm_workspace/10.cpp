#include <bits/stdc++.h>

using namespace std;

/*
Ŭ������� ������ C����� ����ü�� �Ȱ��ٰ� �����ϸ� �ȴ�. 
�߰����� ������ �ִٸ� �����ڶ�� �����̴�.
�����ڴ� ������ �ʱ�ȭ �ϴ� �Ͱ� �Ȱ��� �����̴� ��ư� �������� ����. 
*/  
class People{
public:
	string name;
	int score;
	
	// �̺κ��� ������ �����̴�. 
	People(string name, int score){
		this->name = name;
		this->score = score;
	}
	
	// ������ ���� ������� ���� 
	bool operator < (People &other)
	{
		return this->score < other.score;
	}

}; 

int n;
vector<People> v;  // vector ������Ÿ���� �̿��ؼ� Ŭ������ �����ϴ� �迭�� ����. 

int main(void)
{
	cin >> n;
	
	// �Է� ������ �ִ� �κ� 
	for(int i=0; i<n; i++)
	{
		string name;
		int score;
		cin >> name >> score;
		v.push_back(People(name, score));
	}
	
	// Class ���ο� ���� �������� �������� ������ �Ѵ�. 
	sort(v.begin(), v.end());
	
	for(int i=0; i<n; i++)
	{
		cout << v[i].name << ' ';
	}	
}
