#include <vector>
#include <math.h>

class Stats
{
public:
    double average;
    double max;
    double min;
    
    Stats()
    {
        average = nan("null");
        max = nan("null");
        min = nan("null");
    }
};

namespace Statistics {

    Stats ComputeStatistics(const std::vector<double>& );

    double ComputeAverage(const std::vector<double>&);

    double FindMax(const std::vector<double>&);

    double FindMin(const std::vector<double>&);
}
