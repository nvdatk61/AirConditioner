#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		long long m;
		cin >> n >> m;

		//gia tri khoi tao ban dau
		int ts = 0;
		long long ma = m;
		long long mi = m;

		// gia su ban dau tat ca khach hang deu thoa man kq=1
		int kq = 1;

		for (int i = 1; i <= n; i++) {
			long long ti, li, hi;
			cin >> ti >> li >> hi;

			// tinh pham vi nhiet do tai thoi diem ti
			ma += ti - ts;
			mi -= ti - ts;

			// kiem tra gia pham vi nhiet do toi da tai thoi diem ti co thoa man nam trong [li, hi] hay khong
			// neu khong thoa man gan kq=0
			if (ma<li || mi>hi) {
				kq = 0;
			}

			// cap nhat lai pham vi nhiet do toi da tai thoi diem ti ma van thoa man khach hang i
			if (hi > ma)
				ma = ma;
			else
				ma = hi;
			if (li > mi)
				mi = li;
			else
				mi = mi;
			ts = ti;
		}
		if (kq) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}