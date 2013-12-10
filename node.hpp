#ifndef NODE_HPP
#define NODE_HPP


#include <memory>
#include <string>


namespace test {


class Node
{
public:
    Node();
    ~Node();
public:
    int readBinaryTree(const std::string&);
    std::shared_ptr<Node> getLayer(const unsigned int);
private:
    std::shared_ptr<Node> _left;
    std::shared_ptr<Node> _right;
    std::shared_ptr<Node> _neighbor;
}; // class Node


} /* namespace test */


#endif // NODE_HPP
