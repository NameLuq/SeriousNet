#include "SeriousLayer.h"

namespace seriousnet
{
SeriousLayer::SeriousLayer(){};

SeriousLayer::SeriousLayer(std::size_t num)
{
    layer.reserve(num);
};

SeriousLayer::~SeriousLayer(){};
} // namespace seriouslayer