#include "node.hpp"
#include <fstream>


namespace test {


Node::Node()
{
}


Node::~Node()
{
}


int Node::readBinaryTree(const std::string& file_name) {
    int err = EXIT_FAILURE;
    std::ifstream is(file_name);
    if(is.good()) {
        err = EXIT_SUCCESS;
    }
    return err;

}

std::shared_ptr<Node> Node::getLayer(const unsigned int layer) {
    return std::make_shared<Node>(*this);
}


} // namespace test
