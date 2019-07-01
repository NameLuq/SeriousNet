#include <vector>

#include "SeriousLayer.h"

namespace seriousnet
{
class SeriousNet
{
private:
    std::vector<SeriousLayer> layers;

public:
    SeriousNet();
    void add(const SeriousLayer &);
    // FIXME: replace with proper data class/whatever
    double invoke(std::size_t epoch_n, std::vector<std::vector<double>> data);
    ~SeriousNet();
};
} // namespace seriousnet