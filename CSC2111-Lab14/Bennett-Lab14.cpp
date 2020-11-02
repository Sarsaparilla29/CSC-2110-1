#include <iostream>

class nodeType {
    public:
        int data;
        nodeType* next;
        void display(nodeType* currentNode);
};

void display(nodeType* currentNode){
    while(currentNode != NULL){
        std::cout << currentNode->data << std::endl;
        currentNode = currentNode->next;
    }
}
int main(){
    //Declare node objects
    nodeType* head = NULL;
    nodeType* node2 = NULL;
    nodeType* node3 = NULL;
    nodeType* node4 = NULL;
    nodeType* node5 = NULL;

    //allocate 5 nodes
    head = new nodeType();
    node2 = new nodeType();
    node3 = new nodeType();
    node4 = new nodeType();
    node5 = new nodeType();

    //Program Header
    std::cout << "Lab 14 - Linked Lists" << std::endl;
    std::cout << "---------------------" << std::endl;

    //user input
    std::cout << "First Value: ";
    std::cin >> head->data; 
    head->next = node2;

    std::cout << "Second Value: ";
    std::cin >> node2->data;
    node2->next = node3;

    std::cout << "Third Value: ";
    std::cin >> node3->data;
    node3->next = node4;

    std::cout << "Fourth Value: ";
    std::cin >> node4->data;
    node4->next = node5;

    std::cout << "Fifth Value: ";
    std::cin >> node5->data;
    node5->next = NULL;
    
    //output
    std::cout << "Contents of Linked List..." << std::endl;
    display(head);
    std::cout << "End of Program" << std::endl;

    return 0;
}

