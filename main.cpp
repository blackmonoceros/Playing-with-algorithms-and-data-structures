
//Task 1.


struct Person {
	int number;
	Person* next;
};


void create(Person* &list) {
	list = new Person; // Tworzenie gEowy listy
	list->next = nullptr; // Inicjalizacja wskaE:nika na nastDpnD osobD jako nullptr
}


//Task 2.


void insert(node_t* o, int x) {
	node_t* new_person = new node_t;
	new_person->number = x;
	new_person->next = o->next;
	o->next = new_person;
}


//Task 3.


void print(Node* list) {
	Node* current = list;
	-> while (current != nullptr) {
		cout << current->number << " ";
		current = current->next;
	}
	cout << endl;
}


//Task 4.
bool found(node_t* list, int x) {
	node_t* current = list->next; 
	while (current != nullptr) {
		if (current->number == x) {
			return true; 
		}
		current = current->next;
	}
	return false; 
}


//Task 5.
void delete_next(node_t *p) {
	if (p != NULL && p->next != NULL) {
		node_t *temp = p->next;
		p->next = temp->next;
		free(temp);
	}
}


//Task 6.
void delete_list(list_ptr &list) {
	while (list != NULL) {
		list_ptr temp = list;
		list = list->next;
		free(temp);
	}
}


//Task 7.
node_t *tail(node_t *list) {
	if (list == NULL) {
		return NULL;
	}
	while (list->next != NULL) {
		list = list->next;
	}
	return list;
}
Zadanie 8.
int count(node_t *list) {
	int count = 0;
	while (list != NULL) {
		count++;
		list = list->next;
	}
	return count;
}
//Task 9.
void insertLast(node_t* &list, int x) {
	node_t *newNode = new node_t;
	newNode->number = x;
	newNode->next = NULL;
	if (list == NULL) {
		list = newNode;
	} else {
		node_t *temp = list;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}





//All C++ code with main function:



#include <iostream>
using namespace std;
struct node_t {
	int number;
	node_t* next;
};
using namespace std;
void create(node_t* &list) {
	list = new node_t;
	list->next = nullptr;
}
void insert(node_t* o, int x) {
	node_t* new_person = new node_t;
	new_person->number = x;
	new_person->next = o->next;
	o->next = new_person;
}
void print(node_t* list) {
	node_t* current = list->next;
	while (current != nullptr) {
		cout << current->number << " ";
		current = current->next;
	}
	cout << endl;
}
bool found(node_t* list, int x) {
	node_t* current = list->next;
	while (current != nullptr) {
		if (current->number == x) {
			return true;
		}
		current = current->next;
	}
	return false;
}
void delete_next(node_t* p) {
	if (p != NULL && p->next != NULL) {
		node_t* temp = p->next;
		p->next = temp->next;
		delete temp;
	}
}
void delete_list(node_t* &list) {
	while (list != NULL) {
		node_t* temp = list;
		list = list->next;
		delete temp;
	}
}
node_t* tail(node_t* list) {
	if (list == NULL) {
		return NULL;
	}
	while (list->next != NULL) {
		list = list->next;
	}
	return list;
}
int count(node_t* list) {
	int count = 0;
	while (list != NULL) {
		count++;
		list = list->next;
	}
	return count;
}
void insertLast(node_t* &list, int x) {
	node_t* newNode = new node_t;
	newNode->number = x;
	newNode->next = NULL;
	if (list == NULL) {
		list = newNode;
	} else {
		node_t* temp = list;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
int main() {
	node_t* list;
	create(list);
	insert(list, 5);
	insert(list, 10);
	insert(list, 15);
	print(list);
	cout << "Element numer: " << count(list) << endl;
	insertLast(list, 20);
	print(list);
	cout << "Element nr: " << count(list) << endl;
	delete_next(list);
	print(list);
	delete_list(list);
	return 0;
}