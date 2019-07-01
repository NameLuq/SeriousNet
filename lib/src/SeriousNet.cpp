#include "SeriousNet.h"

namespace seriousnet
{
SeriousNet::SeriousNet(){};

void SeriousNet::add(const SeriousLayer &layer)
{
    layers.emplace_back(layer);
};

double SeriousNet::invoke(std::size_t epoch_n, std::vector<std::vector<double>> data)
{
    return 0.99;
};

SeriousNet::~SeriousNet(){};
} // namespace seriousnet