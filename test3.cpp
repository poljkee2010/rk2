#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* reverse(Node * head)
{
	struct Node* prev = nullptr;
	struct Node* current = head;
	struct Node* next;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}

int main()
{
	Node* head = new Node();
	Node* cur = head, *newEl;
	head->data = 0;

	for (int i = 0; i < 5; i++)
	{
		newEl = new Node();
		newEl->data = i + 1;
		newEl->next = nullptr;
		cur->next = newEl;
		cur = newEl;
	}

	head = reverse(head);

	return 0;
}
