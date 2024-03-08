#include <bits/stdc++.h>
#include "headers/build.cpp"

using namespace std;

int main()
{
    ifstream network("../network-matrix/paper_1_6_nodes.txt");
    // int no_of_nodes = 6;
    vector<vector<int>> matrix;
    if (network.is_open())
    {
        string my_line;
        while (!network.eof())
        {
            getline(network, my_line);
            vector<int> weights;
            for (auto v : my_line)
            {
                if (v != ' ' && v != '\n')
                {
                    weights.push_back(int(v) - 48);
                }
            }
            matrix.push_back(weights);
        }
    }
    unordered_map<int, Node *> ControlBlock = NodeControlBlock(matrix);
    PrintAdjacencyList(ControlBlock);
    return 0;
}