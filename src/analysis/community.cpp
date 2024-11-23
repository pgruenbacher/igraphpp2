
#include <igraph_components.h>
#include <igraph/cpp/graph.h>
#include <igraph_community.h>
#include <igraph/cpp/matrix_int.h>
#include <igraph/cpp/analysis/components.h>

namespace igraph {

MatrixInt community_fastgreedy(const Graph& graph, const Vector& weight, Vector& modularity, Vector& bestMembership) {
    MatrixInt result;
    IGRAPH_TRY(igraph_community_fastgreedy(graph.c_graph(),
                 weight.c_vector(), result.c_matrix(), modularity.c_vector(), bestMembership.c_vector()));
    return result;
}

}
