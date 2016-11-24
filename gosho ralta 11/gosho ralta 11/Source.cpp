#include <iostream>

using namespace std;

int main() {

	// zadacha 1  

	/*
	const int row = 3, col = 4;
	int arr[row][col] = {};

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Input element [" << i << "] [" << j << "] : ";
			cin >> arr[i][j];
			cout << endl;
		}
	}
	
	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < col; j++) {
			arr[i][j] += 10;
			cout << arr[i][j] << " ";
		}
	}
	cout << endl;
 */

	// zadacha 2 

	

	/*
	
	const int row = 3, col = 4;
	int arr[row][col] = {};
	int maxArr, minArr;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Input element [" << i << "] [" << j << "] : ";
			cin >> arr[i][j];
			cout << endl;
		}
	}

	maxArr = arr[0][0];
	minArr = arr[0][0];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {

			if (maxArr < arr[i][j])
				maxArr = arr[i][j];

			if (minArr > arr[i][j])
				minArr = arr[i][j];

		}
	}

	cout << "The max is : " << maxArr << endl; 
	cout << "The min is : " << minArr << endl;

	*/

	// zadacha 3 

	/* 

	const int row = 3, col = 3;
	int arr[row][col] = {};
	int sumRow = 0, sumCol = 0, sumMainDiag = 0, sumSecondDiag = 0, sumAbMainDiag = 0, sumUnMainDiag = 0, sumAbSecondDiag = 0, sumUnSecondDiag = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Input element [" << i << "] [" << j << "] : ";
			cin >> arr[i][j];
			cout << endl;
		}
	}

	for (int i = 0; i < row; i++) {

		sumRow = 0;
		sumCol = 0;

		for (int j = 0; j < col; j++) {

			sumRow += arr[i][j];
			sumCol += arr[j][i];

			if (i == j)
				sumMainDiag += arr[i][j];

			if ((i + j) == (row - 1))
				sumSecondDiag += arr[i][j];

			if (i < j)
				sumAbMainDiag += arr[i][j];

			if (i > j)
				sumUnMainDiag += arr[i][j];

			if ((i+j) < (row - 1))
				sumAbSecondDiag += arr[i][j];

			if ((i + j) >= row)
				sumUnSecondDiag += arr[i][j];



		}

		cout << "\nsum of row " << i << " is " << sumRow << endl;
		cout << "\nsum of collumn " << i << " is " << sumCol << endl;
		cout << endl;
	}

	cout << "\nsum of main diag is : " << sumMainDiag << endl;
	cout << "\nsum of second diag is : " << sumSecondDiag << endl;
	cout << "\nsum of of nums above main diag is : " << sumAbMainDiag << endl;
	cout << "\nsum of of nums under main diag is : " << sumUnMainDiag << endl;
	cout << "\nsum of of nums above second diag is : " << sumAbSecondDiag << endl;
	cout << "\nsum of of nums under second diag is : " << sumUnSecondDiag << endl;
	cout << endl;

*/


	system("pause");
	return 0;


}