#ifndef ALGORITHEM_STRING_NODE_H
#define ALGORITHEM_STRING_NODE_H

#endif //ALGORITHEM_STRING_NODE_H

#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node {
public:
    static int noOfNodes;
    int suffixNode;

    Node () :
            suffixNode(-1) {};

    ~Node() {
        //  cout << "destroying node " << id << endl;

    }
};
#endif