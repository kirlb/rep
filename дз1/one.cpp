#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

const int cDid = 12;
const int cEps = 0.00000007;
int main() {
	double a;
	double b;
	double c;
	double d;
	cin >> a >> b >> c >> d;
	double l = 0;
	double r = 1;
	while (r - l > cEps) {
		double mid = (r + l) / 2;
		if (abs(a * mid * mid * mid + b * mid * mid + c * mid + d) < cEps) {
			l = mid;
		} else {
			r = mid;
		}
	}
	cout << fixed << setprecision(cDid) << l;
}


