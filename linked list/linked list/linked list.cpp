#include <iostream> 
using namespace std;
//utilizing linked lists is utilizing a dynamic array

//Struct called node, for linked list
struct Node
{
    int data;
    Node* link;
};
//typedef can be used to rename items,
//redefining what node pointer looks like 
//(aka no longer needing to require an asterisk anytime I use a pointer, instead they are type: nodePtr)
typedef Node* nodePtr;

//Function prototype
void insert(nodePtr& head, int data);


int main()
{
    //create the first node in a list
    nodePtr head;
    //point to a new node
    head = new Node;
    head->data = 20; //insert new data in node
    head->link = NULL; //set link (next node) to NULL (end of list)

    //Call to insert a new node with 30 as the data point
    insert(head, 30);

    //Print the list
    nodePtr tmp;
    tmp = head;
    //while the link (next node) is not at NULL, print data
    while (tmp != NULL)
    {
        cout << tmp->data << endl;
        tmp = tmp->link;
    }
    return 0;
}
///////////////////////////////////////////////////
//Function to create a new node, and add it to the front
//  of the list
///////////////////////////////////////////////////
void insert(nodePtr& head, int data)
{
    nodePtr tempPtr;
    tempPtr = new Node;  //makes new node and makes temp pointer point to this new node
    tempPtr->data = data;  //populate new node with new data
    tempPtr->link = head;  //linking the next node to head (which is pointing to previous node)
    head = tempPtr; //redirects head to front of list
}

