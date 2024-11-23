#pragma once 


#include <igraph/cpp/types.h>
#include <igraph/cpp/vector.h>
#include <igraph/cpp/matrix_int.h>


namespace igraph {

MatrixInt community_fastgreedy(const Graph& graph, const Vector& weight, Vector& modularity, Vector& bestMembership);
}