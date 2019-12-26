

#include <stdio.h>
#include <set>
using namespace std;


int main(){
	set<int> s;
	for (int i = 1; i <= 10; i++){
		int tmp = 0;
		scanf("%d", &tmp);
		s.insert(tmp % 42);
	}
	printf("%d", s.size());


	return 0;
}