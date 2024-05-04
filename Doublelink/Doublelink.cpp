#include <iostream>
using namespace std;

struct node {
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

Node* START = NULL;