#include <iostream>
using namespace std;
// 사람이 있는지 없는지의 상태 판단 - bool 이용

int main() {
	int N;
	int gst;
	int cnt = 0;
	bool gstArr[101] = { 0 };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> gst;
		// 손님이 선택한 자리에 사람이 없다면 사람이 있는 상태로 바꿔줌
		if (gstArr[gst] == 0) gstArr[gst] = 1;
		// 선택한 자리에 사람이 있다면 거절당하는 횟수 +1 
		else cnt++;
	}
	cout << cnt << '\n';
}
