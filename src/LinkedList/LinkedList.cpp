
#include <iostream>
#include "LinkedListLib.h"

using namespace std;

void PrintList(Node* n);

int main()
{
    ListFunctions LF;
    Node* Last;

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->Value = 16;
    head->next = second;

    second->Value = 5;
    second->next = third;

    third->Value = 10;
    third->next = NULL;
    Last = third;

    PrintList(head);

    int number = LF.ItemCount(head);
    cout << "Items: " << number << endl;

    int max = LF.MaxValue(head);
    cout << "Max: " << max << endl;

    int min = LF.MinValue(head);
    cout << "Min: " << min << endl;

    Node* Tail;
    Tail = new Node();
    Tail->Value = 24;

    LF.AddTail(Last, Tail);
    Last = Tail;

    Node* Tail2 = new Node();
    Tail2->Value = 1;
    LF.AddTail(Last, Tail2);

    PrintList(head);

    number = LF.ItemCount(head);
    cout << "Items: " << number << endl;

    max = LF.MaxValue(head);
    cout << "Max: " << max << endl;

    min = LF.MinValue(head);
    cout << "Min: " << min << endl;

    Node* Head;
    Head = new Node();
    Head->Value = 13;
    LF.AddHead(head, Head);

    PrintList(Head);

    number = LF.ItemCount(Head);
    cout << "Items: " << number << endl;

    max = LF.MaxValue(Head);
    cout << "Max: " << max << endl;

    min = LF.MinValue(Head);
    cout << "Min: " << min << endl;

    return 0;
}

void PrintList(Node* n)
{
    while (n != NULL) {
        cout << "Wert: " << n->Value << endl;
        n = n->next;
    }
}

