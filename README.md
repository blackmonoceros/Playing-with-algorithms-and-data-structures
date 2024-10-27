Playing with algorithms and data structures

Exercises algorithms

Imagine that you are implementing a solution that involves storing a list of people in a queue for a doctor's waiting room. Each person has their own unique number.
Create a list that will simulate such a queue (the information we store about the people in the queue is the number and who is behind them in the queue). 
We will adopt the approach of a list with a head (dummy, sentinel). In this version of the list, the node called the head does not contain any data. 
The first person in the queue is placed behind this head. (figure below)

The advantage of the head-dummy approach considered here is that it is easy to distinguish a situation in which we have already created a list and it is empty 
(the pointer to the list is NOT equal to NULL, because it contains the address of the head - dummy) from a situation when the list has not been created at all
(the pointer to the list is equal to NULL). Moreover, in the approach presented here, it is very easy to add new elements to the beginning of the list, i.e. right after the head - dummy. 
This does not require changing the pointer to the list (pointer to the head).

Task 1.
Create a structure representing a person in the queue with information about the number of this person and who is next in the queue.

Write a function that creates a list. The function should create the head of the list and pass it by reference to the pointer.
void create(list_ptr &list)
Task 2.
Create a function that adds a new person to the queue in the position after person "o".

void insert(node_t *o,int x)
Task 3.
Create a function that prints all the elements of the list. The function parameter is a pointer to the head of the list (in short: a pointer to the list).
void print(node_t *list)

Task 4.
Create a function that checks if the given element x is in the list. The pointer to the head is passed as a function parameter.
bool found(node_t *list, int x)

Task 5.
Write a function that deletes the element that is after the element pointed by the pointer p. (so we delete the element next to the one pointed by p). We need to check if such an element exists.
void delete_next(node_t *p)

Task 6.
Write a function that deletes all the elements of the list one by one and finally deletes the head and returns an empty pointer (NULL). The pointer to the head is passed by reference.
void delete_list(list_ptr &list)

Task 7.
Write a function that returns a pointer to the last element of the list (the "tail" of the list). If the list is empty, the function should return an empty pointer.
node_t *tail(node_t *list)

Task 8.
Write a function that returns the number of elements in the list.
int count(node_t *list)

Task 9.
Write a function that adds a new element to the end of the list.
void insertLast(node_t *list ,int x)
