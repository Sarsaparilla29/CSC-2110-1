#include <iostream>

class nodeType {
    public:
        int data;
        nodeType* next;
        void display(nodeType* currentNode);
};

void nodeType::display(nodeType* currentNode){
    while(currentNode != NULL){
        std::cout << currentNode->data << std::endl;
        currentNode = currentNode->next;
    }
}

int main(){
    nodeType* head = NULL;
    nodeType* node2 = NULL;
    nodeType* node3 = NULL;
    nodeType* node4 = NULL;
    nodeType* node5 = NULL;

    //possible linked list
    
    //allocate 5 nodes
    head = new nodeType();
    node2 = new nodeType();
    node3 = new nodeType();
    node4 = new nodeType();
    node5 = new nodeType();

    //integer variables for user input
    int first = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    int fifth = 0;



    std::cin >> first; //user assign value that will be used for first node
    head->data = first;
    head->next = node2;

    std::cin >> second;
    node2->data = second;
    node2->next = node3;

    std::cin >> third;
    node3->data = third;
    node3->next = node4;

    std::cin >> fourth;
    node4->data = fourth;
    node4->next = node5;

    std::cin >> fifth;
    node5->data = fifth;
    node5->next = NULL;

    head->display(head);

    return 0;
    /*nodeType *node[5] = NULL;
    for(int i = 0; i < 5; i++){
        node[i] = new nodeType();
    }
    for(int i = 0; i < 5; i++){
        int num = 0;
        std::cin >> num;
        node[i]->data = num;
        if(i < 5)
            node[i]->next = node[i+1];
        else
            node[5]->next = NULL;
    }
    for(int i = 0; i < 5; i++){
        display(node[i]);
    }
    return 0;
    */

}
