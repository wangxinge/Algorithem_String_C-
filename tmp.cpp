#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Buffer for input string
string Input;
int inputLength;

// The initial tree contains one node i.e. root node so count=1;
int Node::no0fNodes =1;

// We need to maintain an array of nodes.
Node * nodeArray;

int main(){
	cout<<"Enter String"<<endl;
	getline(cin,Input);
	// For aligning indices
	inputLength = Input.length()-1;
	
	// Allocating memory to the array of nodes.
	nodeArray = (Node *)malloc(2*inputLength*(sizeof(Node)));
	
	// Start timer.
	// Creating initial suffixTree.
	auto start = std::chrono::high_resolution_clock::now();
	suffixTree tree(0,0,-1);
		
return 0;
}
