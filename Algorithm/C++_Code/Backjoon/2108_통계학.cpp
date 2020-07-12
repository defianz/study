#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

	int n, input, a2, a3, a4;
	vector<int> v;

	int sum = 0;

	int min = 4000;
	int max = -4000;
	int arr[8001] = { 0, };
	// 음수를 배열에 넣을수 없기때문에, 크기를 음수포함할수 있도록 늘려줌

	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &input);
		sum += input;
		v.push_back(input);

		if (input < min) min = input;
		if (input > max) max = input;

		if (input < 0) arr[input + 8001]++;
		// 음수일 경우 +8001 하여 저장
		// 최빈값 구하기 위해 카운팅 배열 사용
		else arr[input]++;
	}

	
	// 1번산술평균 구하기 
	// cmath의 round 함수로 쉽게 가능하다.
	// double로 구해야함
	int a1;
	double tmp = (double)sum / n;
	// *산술평균이 음수일때와 양수일때를 나눠야한다
	// ex ) -1.7 => -2 (내림)  1.7 => 2 (올림)
	if (tmp > 0){
		if ((int)(tmp * 10) % 10 >= 5) a1 = ceil(tmp);
		// 소수 첫째자리를 구하여 5 이상일 경우 ceil 함수통해 반올림
		else a1 = floor(tmp);
		// 5 미만일 경우 내린다.
	}
	else {
		// 음수일 경우
		if ((int)(tmp * -10) % 10 >= 5) a1 = floor(tmp);
		else a1 = ceil(tmp);
	}


	// 2번 중앙값 구하기
	// algorithm의 sort를 사용하여 간단히 구함 (홀수기 때문에 n/2가 무조건 중앙값 index (벡터는 0부터 index 시작하기 때문) )
	int medianindex = n / 2;
	sort(v.begin(), v.end());
	a2 = v[medianindex];


	// 3번 최빈값 구하는 과정
	int cnt = 0;
	int idx;
	int flag = 0;
	// 음수 부터 scan 시작하여, 최빈값을 구한다. 
	// 음수 -> 양수순으로 해서  같은 빈도로 나올때 flag를 설정하여 두번째로 작은값을 뽑는다.
	// 더 많은 빈도수가 나오는 값이 생기면 flag 초기화 
	for (int i = 4001; i <= 8000; i++){
		if (arr[i] > cnt){
			cnt = arr[i];
			idx = i;
			flag = 1;
		}
		else if (arr[i] == cnt){
			if (flag == 1){
				idx = i;
			}
			flag++;
		}
	}

	for (int i = 0; i <= 4000; i++){
		if (arr[i] > cnt){
			cnt = arr[i];
			idx = i;
			flag = 1;
		}
		else if (arr[i] == cnt){
			if (flag == 1){
				idx = i;
			}
			flag++;
		}
	}

	a3 = idx > 4000 ? idx - 8001 : idx;
	// 최빈값 구하는 과정 끝


	// 4번 ragne 구하기
	a4 = max - min;

	// 정답 출력
	cout << a1 << "\n";
	cout << a2 << "\n";
	cout << a3 << "\n";
	cout << a4 << "\n";


	return 0;
}