#include <iostream>
using namespace std;

int main() {
	int M, N;
	int cnt = 0, sum = 0, min = -1;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) cnt++;
		}
		if (cnt == 2) {
			if (min == -1) min = i;
			sum += i;
		}
		cnt = 0;
	}

	if (min == -1) cout << -1 << '\n';
	else {
		cout << sum << '\n' << min << '\n';
	}
	return 0;
}
