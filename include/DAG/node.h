#ifndef AIRFLOW_CLONE_NODE_H
#define AIRFLOW_CLONE_NODE_H

#include <vector>
#include <iostream>

using std::vector;
using std::string;

class Node{
    public:
        vector<string> fetchCommand();

        /**
         * @brief Construct a new Node 
         * 
         * @param command represents the source code that must run
         * @param next represents the list of commands that have dependency on this node
         */
        Node(vector<string> command);

        /**
         * @brief adds an edge from current -> next
         * 
         * @param next the node that depends on the result of the current node
         */
        void addEdge(Node* next);

        /**
         * @brief runs the commands
         * 
         * @return true if run is successful
         * @return false if run is unsuccessful
         */
        bool run();

    private:
        vector<string> command;
        vector<Node*> adjacencies;
};


#endif // AIRFLOW_CLONE_NODE_H