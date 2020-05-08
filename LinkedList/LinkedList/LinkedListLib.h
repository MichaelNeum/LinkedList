#include <iostream>

class Node
{
public:
	int Value;
	Node* next;
};

class ListFunctions
{
public:
	int ItemCount(Node* n);
	int MaxValue(Node* n);
	int MinValue(Node* n);
	void AddTail(Node* List, Node* Object);
	void AddHead(Node* List, Node* Object);
};