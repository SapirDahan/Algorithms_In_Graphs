#include "Graph.hpp"

using namespace ariel;

void Graph::loadGraph(const std::vector<std::vector<size_t>>& graph) {
    matrix = graph;
}

void Graph::printGraph() const {
    size_t vertices = 0;

    for (const auto& innerVec : matrix) {
        for (int num : innerVec) {
            if (num != 0) {
                vertices++;
            }
        }
    }

    std::cout << "Graph with " << matrix.size() << " vertices and " << vertices << " edges." << std::endl;
}

// Help Functions
size_t Graph::size() const{
    return matrix.size();
}

const std::vector<size_t>& Graph::operator[](size_t index) const {
    return matrix[index];
}