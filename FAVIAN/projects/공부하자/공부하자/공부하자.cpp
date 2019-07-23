#include<algorithm>
#include<iostream>
using namespace std;

int answer[10] = { 1,2,3,4,5,1,2,3,4,5 };
bool flag;
int main() {
	int n, x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> x;
			if (x != answer[j])
				flag = true;
		}
		if (flag) {
			flag = false;
			continue;
		}
		else {
			cout << i << "\n";
		}
	}
}