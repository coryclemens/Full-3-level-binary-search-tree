#include <iostream>
#include "BST.h"
using namespace std;
#define SIZE 7


	Tree::Tree(int arr[]) {

		headNode = new Node(arr[SIZE / 2]);
		headNode->LHS = new Node(arr[SIZE % 2]);
		headNode->RHS = new Node(arr[(SIZE / 2) + 2]);
		traverseL = headNode->LHS;
		traverseR = headNode->RHS;
		traverseL->LHS = new Node(arr[0]);
		traverseL->RHS = new Node(arr[(SIZE / 2) - 1]);
		traverseR->LHS = new Node(arr[(SIZE / 2) + 1]);
		traverseR->RHS = new Node(arr[SIZE -1]);
		resetTrav();

		cout << endl << "New tree constructed and populated..." << endl;
	}

	Tree::Tree()
		:headNode(0), traverseL(headNode), traverseR(headNode)
	{
		
		
	}

	Tree::Node::Node(int data)
		:data(data), LHS(0), RHS(0)
	{
	}

	void Tree::binarySearch(int data)
	{
		bool found = false;
		resetTrav();
		
		while(!found)
			{
				if (traverseL == NULL) 
				{
					cout << "Number not in tree..." << endl;
					break;
				}

				if(traverseL->data==data)
				{
					found = true;
					cout << "Number " << data << " found in tree..." << endl;
				}

				else if (traverseL->data > data)
				{
					traverseL = traverseL->LHS;
				}
				else
				{
					traverseL = traverseL->RHS;
				}
			}

	
	
	}

	void Tree::print(ostream & out)
	{
		out << endl << endl << endl;
		out << "\t\t" << headNode->data << endl << endl << endl;;
		traverseL = headNode->LHS;
		traverseR = headNode->RHS;
		out << "\t" << traverseL->data << "\t\t" << traverseR->data << endl << endl << endl;
		out << traverseL->LHS->data << "\t       " << traverseL->RHS->data << " ";
		out << " " << traverseR->LHS->data << "\t\t" << traverseR->RHS->data << endl << endl << endl;
	
	
	}

	void Tree::resetTrav()
	{
		traverseL = headNode;
		traverseR = headNode;
	}
