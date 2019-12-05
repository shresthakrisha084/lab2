
class Node
{
	public:
		int info;
		Node* next;
};
class Linkedlist
{
	private:
		Node* HEAD;
		Node* TAIL;
	public:
		Linkedlist();
		~Linkedlist();
		bool isEmpty();
		void addToHead(int data);
		void add(int data,Node* &predecessor);
		void addToTail(int data);
		void removefromHead();
		void remove(int data);
		void traverse();
		bool retrieve(int data,Node* &outputptr);
};

