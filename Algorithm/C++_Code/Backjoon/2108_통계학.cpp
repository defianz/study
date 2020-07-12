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
	// ������ �迭�� ������ ���⶧����, ũ�⸦ ���������Ҽ� �ֵ��� �÷���

	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &input);
		sum += input;
		v.push_back(input);

		if (input < min) min = input;
		if (input > max) max = input;

		if (input < 0) arr[input + 8001]++;
		// ������ ��� +8001 �Ͽ� ����
		// �ֺ� ���ϱ� ���� ī���� �迭 ���
		else arr[input]++;
	}

	
	// 1�������� ���ϱ� 
	// cmath�� round �Լ��� ���� �����ϴ�.
	// double�� ���ؾ���
	int a1;
	double tmp = (double)sum / n;
	// *�������� �����϶��� ����϶��� �������Ѵ�
	// ex ) -1.7 => -2 (����)  1.7 => 2 (�ø�)
	if (tmp > 0){
		if ((int)(tmp * 10) % 10 >= 5) a1 = ceil(tmp);
		// �Ҽ� ù°�ڸ��� ���Ͽ� 5 �̻��� ��� ceil �Լ����� �ݿø�
		else a1 = floor(tmp);
		// 5 �̸��� ��� ������.
	}
	else {
		// ������ ���
		if ((int)(tmp * -10) % 10 >= 5) a1 = floor(tmp);
		else a1 = ceil(tmp);
	}


	// 2�� �߾Ӱ� ���ϱ�
	// algorithm�� sort�� ����Ͽ� ������ ���� (Ȧ���� ������ n/2�� ������ �߾Ӱ� index (���ʹ� 0���� index �����ϱ� ����) )
	int medianindex = n / 2;
	sort(v.begin(), v.end());
	a2 = v[medianindex];


	// 3�� �ֺ� ���ϴ� ����
	int cnt = 0;
	int idx;
	int flag = 0;
	// ���� ���� scan �����Ͽ�, �ֺ��� ���Ѵ�. 
	// ���� -> ��������� �ؼ�  ���� �󵵷� ���ö� flag�� �����Ͽ� �ι�°�� �������� �̴´�.
	// �� ���� �󵵼��� ������ ���� ����� flag �ʱ�ȭ 
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
	// �ֺ� ���ϴ� ���� ��


	// 4�� ragne ���ϱ�
	a4 = max - min;

	// ���� ���
	cout << a1 << "\n";
	cout << a2 << "\n";
	cout << a3 << "\n";
	cout << a4 << "\n";


	return 0;
}