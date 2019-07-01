#include <vector>

namespace seriousnet
{

class SeriousLayer
{
private:
    std::vector<double> layer;

public:
    SeriousLayer();
    SeriousLayer(std::size_t);
    ~SeriousLayer();
};
} // namespace seriouslayer