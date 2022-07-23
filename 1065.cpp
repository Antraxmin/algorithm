#include <iostream>
using namespace std;

int main() {
	int N;
	int arr[4] = { 0 };
	int cnt = 0; 
	cin >> N;
	// N이 두자리 정수이면 모두 한수 
	if (N < 100) {
		cout << N;
		return 0;
	}
	else {
		// 100부터 N까지 등차수열인지 판단
		for (int i = 100; i <= N; i++) {
			int tmp = i;
			arr[0] = tmp / 100;
			arr[1] = (tmp % 100) / 10;
			arr[2] = (tmp % 100) % 10;
			if (arr[2] - arr[1] == arr[1] - arr[0]) cnt++;
		}
		cout << cnt+99 << '\n';
	}
}

// 등차수열일 조건: a3 - a2 == a2 - a1
