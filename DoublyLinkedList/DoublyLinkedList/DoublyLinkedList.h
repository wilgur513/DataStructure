typedef struct node
{
	int data;
	struct node* prev;
	struct node* next;
} Node;

typedef struct doubly_linked_list
{
	Node* head;
	Node* tail;
}DoublyLinkedList;

void Init(DoublyLinkedList* list);
void AddHead(DoublyLinkedList* list, int data);
void AddTail(DoublyLinkedList* list, int data);
void RemoveHead(DoublyLinkedList* list);
void RemoveTail(DoublyLinkedList* list);
Node* GetHead(DoublyLinkedList* list);
Node* GetTail(DoublyLinkedList* list);
Node* GetNextNode(Node* node);
Node* GetBeforeNode(Node* node);