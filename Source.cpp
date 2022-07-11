#include<iostream>
using namespace std;
int i;
int j;
void main() {
	int a[100][100];
	int m, n;
	cin >> m >> n;
	// Row wise input
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	// Row wise output
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	// Colum wise output
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
}