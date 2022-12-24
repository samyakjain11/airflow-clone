#ifndef AIRFLOW_CLONE_GRAPH_H
#define AIRFLOW_CLONE_GRAPH_H

#include "DAG/node.h"

class Graph {
    public: 
        Graph(vector<Node> nodes);

        /**
         * @brief 
         * 
         * @return int 
         * -1 if the DAG has cycles
         * 0 if the commands have errors
         * 1 if the commands run perfectly
         */
        int execute();

    private:
        vector<Node*> source_nodes;
        bool check_cycles();
        vector<vector<Node*>> topological_sort();
        bool run(vector<vector<Node*>> order);

};

#endif // AIRFLOW_CLONE_GRAPH_H