#include <iostream>
using namespace std;

//출력함수
void show(const char* s, int time) {
	for(int i = 0; i < time; i++) cout << "__";
	cout << s << '\n';
}

//재귀함수
void func(int n, int time) {
  if(n == 0) {
		show("\"재귀함수가 뭔가요?\"", time);
		show("\"재귀함수는 자기 자신을 호출하는 함수라네\"", time);
		show("라고 답변하였지.", time);
		return ;
	}
	show("\"재귀함수가 뭔가요?\"", time);
	show("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.", time);
	show("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.", time);
	show("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"", time);
	time += 2;
	func(n-1, time);
	time -= 2;
	show("라고 답변하였지.", time);
}

//실행함수
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int time = 0; //부호 반복횟수
	cin >> n;
	show("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.", time);
	func(n, time);
}