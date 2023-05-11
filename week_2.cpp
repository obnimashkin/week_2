#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
		srand(time(NULL));

		int(array)[3][3], * ptr = array[0], (parni) = 0;

		int row = sizeof(array) / sizeof(array[0]);         
		int column = sizeof(array[0]) / sizeof(array[0][0]);   
		int elem = sizeof(array) / sizeof(array[0][0]);

		for (int i = 0;i < elem;i++) 
		{
			*(ptr + i) = 10 + rand() % 90;
		}
		for (int j = 0; j < elem;j++) 
		{
			if (j % column == 0 && j != 0) cout << endl;
			if (*(ptr + j) % 2 == 0) parni++;
			cout << *(ptr + j) << " ";
		}
		cout << "\nMain diagonal = ";
		for (int i = 0, j = 0;i < elem; i += row, j++) cout << *(ptr + (i + j)) << " ";
		
		cout << "\nSide diagonal = ";
		for (int i = row - 1, j = 0;i < elem; i += row, j++) cout << *(ptr + (i - j)) << " ";
		
		cout << "\nEven numbers = " << parni << "\nNot event numbers = " << elem - parni;
	}


