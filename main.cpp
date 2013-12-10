#include "node.hpp"
#include <memory>
#include <string>


const std::string file_name = "input.txt";
const unsigned int level = 2;

int main(int argc, char** argv) {
    std::shared_ptr<test::Node> head;
    head->readBinaryTree(file_name);
    head->getLayer(level);
    return 0;
}

