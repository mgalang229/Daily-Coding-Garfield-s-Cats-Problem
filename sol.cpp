// Using C++ and Algebra by: jasonpogi
#include <bits/stdc++.h>

using namespace std;

void decode(){
	int a, b, c;
	cin >> a >> b >> c;
	int x = 0, y = 0, z = 0;
	x = (abs((b-c))+a)/2;
	z = c-x;
	y = b-z;
	cout << x << " " << y << " " << z << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}
