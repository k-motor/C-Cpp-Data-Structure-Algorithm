#include <bits/stdc++.h>

using namespace std;

/*
클래스라는 개념은 C언어의 구조체와 똑같다고 생각하면 된다. 
추가적인 개념이 있다면 생성자라는 개념이다.
생성자는 변수를 초기화 하는 것과 똑같은 개념이니 어렵게 생각하지 말자. 
*/  
class People{
public:
	string name;
	int score;
	
	// 이부분이 생성자 개념이다. 
	People(string name, int score){
		this->name = name;
		this->score = score;
	}
	
	// 점수가 낮은 순서대로 정렬 
	bool operator < (People &other)
	{
		return this->score < other.score;
	}

}; 

int n;
vector<People> v;  // vector 데이터타입을 이용해서 클래스를 저장하는 배열을 만듬. 

int main(void)
{
	cin >> n;
	
	// 입력 정보를 넣는 부분 
	for(int i=0; i<n; i++)
	{
		string name;
		int score;
		cin >> name >> score;
		v.push_back(People(name, score));
	}
	
	// Class 내부에 만든 기준으로 오름차순 정렬을 한다. 
	sort(v.begin(), v.end());
	
	for(int i=0; i<n; i++)
	{
		cout << v[i].name << ' ';
	}	
}
