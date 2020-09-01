#include "stats.h"

namespace Statistics
{
    Stats ComputeStatistics(const std::vector<double>& values) {
        //Implement statistics here
        if (values.size() == 0) {
            Stats noStats;
            return noStats;
        }

        Stats stats;
        stats.average = ComputeAverage(values);
        stats.max = FindMax(values);
        stats.min = FindMin(values);
        return stats;
    }

    double ComputeAverage(const std::vector<double>& values)
    {
        double sum = 0;

        for (double value : values) {
            sum += value;
        }

        return sum / values.size();
    }
    
    double FindMax(const std::vector<double>& values)
    {
        double max = values[0];

        for (double value : values) {
            if (value > max) {
                max = value;
            }
        }

        return max;
    }

    double FindMin(const std::vector<double>& values)
    {
        double min = values[0];

        for (double value : values) {
            if (value < min) {
                min = value;
            }
        }

        return min;
    }
}
