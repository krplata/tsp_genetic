#include "../include/tsp.hpp"

void tsp::load_from_file(std::string filepath)
{
    try
    {
        matrix_   = Adjacency_Matrix(filepath);
        is_loaded = true;
    } catch (const std::invalid_argument&)
    {
        throw;
    }
}