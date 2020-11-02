#include <iostream>
#include "nodeType.h"

void nodeType::display(nodeType* currentNode){
    while(currentNode != NULL){
        std::cout << currentNode->data << std::endl;
        currentNode = currentNode->next;
    }
}
