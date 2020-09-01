#include <vector>
#include <math.h>

class Stats
{
public:
    float average;
    float max;
    float min;
    
    Stats()
    {
        average = NAN;
        max = NAN;
        min = NAN;
    }
};

namespace Statistics {

    Stats ComputeStatistics(const std::vector<float>& );

    float computeAverage(const std::vector<float>&);

    float findMax(const std::vector<float>&);

    float findMin(const std::vector<float>&);
}
