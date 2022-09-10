#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	vector<int> even, odd;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		sum += x;
		if (x & 1) odd.push_back(x);
		else even.push_back(x);
	}
	
	sort(odd.rbegin(), odd.rend());
	sort(even.rbegin(), even.rend());
	int k = min(odd.size(), even.size());
	int rem = sum;
	rem -= accumulate(odd.begin(), odd.begin() + k, 0);
	rem -= accumulate(even.begin(), even.begin() + k, 0);
	if (int(odd.size()) > k) {
		rem -= odd[k];
	}
	if (int(even.size()) > k) {
		rem -= even[k];
	}
	
	cout << rem << endl;
	
	return 0;
}