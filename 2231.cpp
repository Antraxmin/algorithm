#include <iostream>
using namespace std;

int main() {
    int N, M = 0;          
    cin >> N;
    // 생성자 M은 반드시 N보다 작음 
    // 오름차순으로 찾아낼때 가장 작은 M값이 정답
    for (int i = 0; i < N; i++) {
        int tmp = i;
        int sum = 0;
        while (tmp != 0) {
            sum += (tmp % 10);
            tmp /= 10;
        }
        if (sum + i == N) {
            M = i;
            break;      // break 안달면 가장 큰 M값이 출력됨
        }
    }
    cout << M << '\n';
}


/* 1부터 N까지 숫자의 각 자리수의 합 알고리즘 
for (int i = 0; i < N; i++) {
    int tmp = i;
    int sum = 0;
    while (tmp != 0) {
        sum += (tmp % 10);
        tmp /= 10;
    }
 }
*/
