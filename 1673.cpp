#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n, k;
	while (scanf("%d %d", &n, &k) != EOF) {
		int stmp = 0, ans = 0;
		while (1) {
			if (n == 0) break;	// 쿠폰이 모두 소진되면 종료
			ans += n;	// 쿠폰 모두 쓰기
			stmp += n;	// n개의 쿠폰으로 n마리 치킨을 주문할때 도장 n개 적립
			n = stmp / k;	// 적립된 도장 k개로 다시 사용할 수 있는 쿠폰 개수
			stmp %= k;	// k개를 채우지 못해 쿠폰으로 바꾸지 못하고 남은 도장 개수
		}
		cout << ans << '\n';
	}
}
