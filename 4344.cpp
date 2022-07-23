#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int C, N;
	int sum, avg, cnt;
	double per;
	int score[1000];   
	cin >> C;
	// C개의 테스트케이스
	for (int i = 0; i < C; i++) {
		sum = 0, cnt = 0, avg = 0;	// 변수 초기화 필수
		cin >> N;
		// N명의 학생 점수를 입력받고 총합 계산
		for (int j = 0; j < N; j++) {
			cin >> score[j];  
			sum += score[j];
		}
		avg = sum / N;  // 학생 점수 평균
		// 평균이 넘는 학생 수 카운트
		for (int j = 0; j < N; j++) {
			if (avg < score[j]) cnt++;  
		}

		per = (double)cnt / N;	// 비율 계산

		// 소수점 형식에 맞추어 출력
		cout << fixed;
		cout.precision(3);
		cout << per * 100 << "%" << '\n';
	}
}
