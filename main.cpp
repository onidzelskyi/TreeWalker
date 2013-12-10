#include "node.hpp"
#include <string>


const std::string file_name = "input.txt";
const unsigned int level = 2;

int main(int argc, char** argv) {
    test::Node* head;
    test::Node::readBinaryTree(head);
    //head->getLayer(level);
    return 0;
}

