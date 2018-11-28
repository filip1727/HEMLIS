#include "set.hpp"

// Default constructor
Set::Set()
{

	Node *head = new Node(0,nullptr);  //dummy node

}

// Constructor for creating a set from an int
Set::Set(int v)
{

	// VERISION 1
	//node *head = new node(0, nullptr);  //dummy node
	//node *newnode = new node(v, nullptr);
	//head->next = newnode;

	//VERISION 2
	Node *newNode = new Node(v, nullptr);
	Node *head = new Node(0,newNode);  //dummy node
	
}

// Constructor creating a set
// a non-sorted array of n intgers
Set::Set(const int a[], int n) 
{
	Node *head = new Node(0, nullptr);
	for(int i = n; i > 0; --i)
	{
		Node *newNode = new Node(a[n], nullptr);
		head->next = newNode;
	}
}

// copy constructor
Set::Set(const Set& source) 
{

	//if ((source.head->next != nullptr))
	//{
	//	Node *newNode = new Node((source.head->value), nullptr);
	//	head->next = newNode;
	//}
	//while(newNode)
	Node *p = source.head->next; //skip the dummy node
	Node *newNode = new Node(source.head->value, p);
	
	while (p->next != nullptr)
	{

		p = p->next;
		Node *newNode = new Node(p->value, p->next);

	}

}

// Destructor: deallocate all nodes
Set::~Set() 
{

	delete[] head;
}

// Test if set is empty
bool Set::empty() const 
{
    // Add code
    // implement before HA session week 46

    return true;  // to be deleted
}

// Return number of elements in the set
int Set::cardinality() const 
{
    // Add code
    // implement before HA session week 46

    return 0; // to be deleted
}

// Test if x is an element of the set
bool Set::member(int x) const 
{
    // Add code
    // implement before HA session week 46

    return false; //to be deleted
}

// Assignment operator
Set& Set::operator=(const Set& s)
{
	// Add code
	return *this;  // to be deleted
}

bool Set::operator<=(const Set& b) const 
{
    // Add code
    return false;  // to be deleted
}

bool Set::operator==(const Set& b) const 
{
    // Add code
    return false;  // to be deleted
}

bool Set::operator!=(const Set& b) const 
{
    // Add code
    return false;  // to be deleted
}

bool Set::operator<(const Set& b) const 
{
    // Add code
    return false;  // to be deleted
}

// Set union
// Repeated values are not allowed
Set Set::operator+(const Set& b) const 
{
    // Add code
    // implement before HA session week 45

    return *this;  // to be deleted
}

// Set intersection
Set Set::operator*(const Set& b) const 
{
    // Add code
    return *this;  // to be deleted
}

// Set difference
Set Set::operator-(const Set& b) const 
{
    // Add code
    return *this;  // to be deleted
}

// Set union with set {x}
Set Set::operator+(int x) const 
{
    // Add code
    return *this;  // to be deleted
}

// Set difference with set {x}
Set Set::operator-(int x) const 
{
    // Add code
    return *this;  // to be deleted
}



std::ostream& operator<<(std::ostream& os, const Set& theSet) 
{
	if (theSet.empty())
	{
		os << "Set is empty!";
	}
    else
	{
        Set::Node* temp = theSet.head->next;
        os << "{ ";

        while (temp)
		{
            os << temp->value << " ";
            temp = temp->next;
        }
        os << "}";
    }

    return os;
}
