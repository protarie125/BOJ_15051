#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	auto t1 = 2 * (b + 2 * c);
	auto min = int{ t1 };

	auto t2 = 2 * (a + c);
	if (t2 < min) {
		min = t2;
	}

	auto t3 = 2 * (b + 2 * a);
	if (t3 < min) {
		min = t3;
	}

	cout << min;

	return 0;
}