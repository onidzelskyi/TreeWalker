#include "node.hpp"
#include <fstream>


namespace test {


Node::Node()
{
}


Node::~Node()
{
}


int Node::readBinaryTree(Node* head) {
    int err = EXIT_FAILURE;
    std::ifstream is(file_name);
    unsigned int node=0;
    unsigned int left=0;
    unsigned int right=0;
    while(is.good()) {
        is >> node >> left >> right;
        if(node) {
            this;
        }
        if(left) {
        }
    }
    return err;

}

/*
std::shared_ptr<Node> Node::getLayer(const unsigned int layer) {
    return std::make_shared<Node>(*this);
}
*/

} // namespace test
