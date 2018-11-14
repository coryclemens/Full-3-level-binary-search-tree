#include <iostream>
using namespace std;
#include "BST.h"
#define SIZE 7

int main() {

	int arr[SIZE];
	int i = 0;
	int temp;
	int j = 0;
	int exit = 0;
	int playChoice = 0;
	

		for (i = 0; i < SIZE; i++)
		{
			cout << "\t\t\tPlease enter 7 numbers, from 1-500..." << endl;
			cin >> arr[i];
		}

		cout << endl << "Unsorted Array elements:" << endl;
		cout << "---------------------" << endl;
		for (i = 0; i < SIZE; i++)
			cout << arr[i] << "\t";
		cout << endl;

		for (i = 0; i < SIZE; i++)
		{
			for (j = i + 1; j < SIZE; j++)
			{
				if (arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		cout << endl << "Sorted (Ascending Order) Array elements:" << endl;
		cout << "----------------------------------------" << endl;
		for (i = 0; i < SIZE; i++)
			cout << arr[i] << "\t";
		cout << endl;


		Tree cory(arr);
		cory.print(cout);

		while (!exit) {
			cout << endl << "\t\tMenu: " << endl;
			cout << "\t\t------" << endl;
			cout << "\t 1) Binary Search (search for number in tree)" << endl;
			cout << "\t 2) Exit" << endl;
			cin >> playChoice;

			switch (playChoice) {
			case 1:
				int numSearch;
				cout << "Enter number for binary search... " << endl;
				cin >> numSearch;
				cory.binarySearch(numSearch);
				break;

			case 2:
				exit = 1;
				break;
			}

		}

		
	
	return 1;
	
}