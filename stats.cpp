#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& values) {
    //Implement statistics here
    if (values.size() == 0) {
        Stats noStats;
        return noStats;
    }

    Stats stats;
    stats.average = computeAverage(values);
    stats.max = findMax(values);
    stats.min = findMin(values);
    return stats;
}

float Statistics::computeAverage(const std::vector<float>& values)
{
    float sum = 0;

    for (float value : values) {
        sum += value;
    }

    return sum / values.size();
}

float Statistics::findMax(const std::vector<float>& values)
{
    float max = values[0];
    
    for (float value : values) {
        if (value > max) {
            max = value;
        }
    }

    return max;
}

float Statistics::findMin(const std::vector<float>& values)
{
    float min = values[0];

    for (float value : values) {
        if (value < min) {
            min = value;
        }
    }

    return min;
}
