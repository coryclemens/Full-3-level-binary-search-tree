#pragma once
#include <iostream>
using namespace std;
#ifndef BST_H_INCLUDED 
#define BST_H_INCLUDED
#define SIZE 7


class Tree {

	public:

		Tree();
		Tree(int arr[]);
		void print(ostream & out);
		void resetTrav();
		void binarySearch(int data);


	private:

		class Node {

				public:
					Node(int data);
					Node* LHS;
					Node* RHS;
					int data;
			};

		
		
		Node * headNode;
		Node * traverseL;
		Node * traverseR;


};
#endif BST_H_INCLUDED
