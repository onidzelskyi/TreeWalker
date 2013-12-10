#ifndef NODE_HPP
#define NODE_HPP


namespace test {


class Node
{
public:
    Node();
    ~Node();
public:
    static int readBinaryTree(Node*);
    //std::shared_ptr<Node> getLayer(const unsigned int);
private:
    Node* _left;
    Node* _right;
    Node* _neighbor;
}; // class Node


} /* namespace test */


#endif // NODE_HPP
