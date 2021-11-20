#include <iostream>

using namespace std;
int main() {
	int k=0;
	cin >> k;
	int n = 4*k+14;
//	cout << n <<"\n";
	char **arr = new char*[n/2];
	for (int i = 0; i < n / 2; i++) {
		arr[i] = new char[n];
	}
	for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = ' ';
		}
	}
//	cout << n / 2 - 1 << "\n";

	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n / 2 - 1)
				arr[i][j] = '*';
			else if((i == ((n / 2 - 1) / 2 - 1) && j == ((n / 2 - 1) / 2)) || (i == ((n / 2 - 1) / 2 - 1) && j == (n/2 + (n / 2 - 1) / 2)))
				arr[i][j] = '*';
			else if ((i == ((n / 2 - 1) / 2 + 1) && j == ((n / 2 - 1) / 2)) || (i == ((n / 2 - 1) / 2 + 1) && j == (n / 2 + (n / 2 - 1) / 2)))
				arr[i][j] = '*';
			else if ((i == ((n / 2 - 1)/2) && j == ((n / 2 - 1) / 2)) || (i == ((n / 2 - 1) / 2) && j == ((n / 2 - 1) / 2)-1) || 
				(i == ((n / 2 - 1) / 2) && j == ((n / 2 - 1) / 2)+1) || (i == ((n / 2 - 1) / 2) && j == (n/2 + (n / 2 - 1) / 2)) ||
				(i == ((n / 2 - 1) / 2) && j == (n/2+(n / 2 - 1) / 2)-1) || (i == ((n / 2 - 1) / 2) && j == (n / 2 + (n / 2 - 1) / 2) + 1))
				arr[i][j] = '*';
			arr[i][0] = '*';
			arr[i][n/2-1] = '*';
			arr[i][n/2] = '*';
			arr[i][n - 1] = '*';
		}
	}


	/*for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n; j++) {
			if(i==0 || i==n/2-1)
			arr[i][j] = '*';
			else if (i != 0 && i!=n/2-1) {
				if ((i == n/5 && j == n/4) || (i == n/5 && j == 13))
					arr[i][j] = '*';
				else if ((i == 4 && j == 3)||(i == 4 && j == 4)||(i==4 && j==5)||
							(i==4 && j==12)||(i==4 && j==13)||(i==4 && j==14) 	)
					arr[i][j] = '*';
				else if ((i == 5 && j == 4) || (i == 5 && j == 13))
					arr[i][j] = '*';
				arr[i][0] = '*';
				arr[i][8] = '*';
				arr[i][9] = '*';
				arr[i][n - 1] = '*';
			}
			
		}
	}*/
	for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] ;
		}
		cout << "\n";
	}
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
	for (int i = 0; i < n / 2; i++)
		delete[] arr[i];
	delete[] arr;
}

