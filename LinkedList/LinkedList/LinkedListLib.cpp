#include "LinkedListLib.h"

int ListFunctions::ItemCount(Node* n)
{
	int count = 0;
	while (n != NULL) {
		count++;
		n = n->next;
	}
	return count;
}
int ListFunctions::MaxValue(Node* n) 
{
	int MaxValue = 0;
	while (n != 0) {
		if (n->Value > MaxValue) MaxValue = n->Value;
		n = n->next;
	}
	return MaxValue;
}
int ListFunctions::MinValue(Node* n) 
{
	int MinValue = n->Value;
	n = n->next;
	while (n != 0) {
		if (n->Value < MinValue) MinValue = n->Value;
		n = n->next;
	}
	return MinValue;
}

void ListFunctions::AddTail(Node* Last, Node* Object)
{
	Last->next = Object;
}
void ListFunctions::AddHead(Node* List, Node* Object)
{
	Object->next = List;
}

