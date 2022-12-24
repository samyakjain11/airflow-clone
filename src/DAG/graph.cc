#include "DAG/graph.h"

bool Graph::check_cycles(){
    return true;
}

vector<vector<Node*>> Graph::topological_sort(){
 
}

bool Graph::run(vector<vector<Node*>> order){
    return true;
}

int Graph::execute(){
    if (check_cycles()){
        return -1;
    }
    vector<vector<Node*>> order =  topological_sort();
    bool exit_code = run(order);
    if(exit_code){
        return 1;
    } else {
        return 0;
    }
}