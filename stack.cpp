#include<iostream>

using namespace std;
struct Node
{
	string data;
	Node *next;
};
class Stack
{
	private:
		Node *top;
	public:
		Stack();
		~Stack();
		void push(string d);
		string pop();
		string toString();
		bool isEmpty(){return top == NULL;};
		string peak();
};
string Stack::peak()
{
	Node *current = top;
	if(!isEmpty())
	{
		return current->data;
	}
}
Stack::Stack()
{
	top = NULL;
}
Stack::~Stack()
{
	while(!isEmpty())
	{
		pop();
	}
}
void Stack::push(string d)
{
	Node *newTop = new Node;
	newTop->data=d;
	newTop->next=top;
	top = newTop;
}
string Stack::pop()
{
	if (!isEmpty()) 
	{
		string value = top->data; //set aside current value in top
		Node *oldtop = top; //create oldtop to point to top
		top = top->next; //reassign top of stack to be second
						 //top node
		delete oldtop; //delete the node being popped
		return value; //return value of popped node
	} 
	else 
	{
      cout << "ERROR: you can't pop from empty stack!\n";
      exit(1);
	}
}

string Stack::toString() {
  string result = "(top) -> ";
  Node *current = top;
  while (current != NULL) {
    result += current->data + " -> ";
    current = current->next;
  }
  result += "NULL";
  return result;
}	
int main(){
	Stack *s = new Stack();
	cout<< s->toString() << endl;
	s->push("Blaze");
	cout<< s->toString() << endl;
	cout<<s->peak() <<endl;
	s->push("Sadie");
	cout<< s->toString() << endl;
	while (!s->isEmpty()) {
		cout << "Stack content popped: " << s->pop() << endl;
	}
	cout<< s->toString() << endl;
	delete s;
	return 0;
}