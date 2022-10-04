#include <iostream>
#include <limits>

using namespace std;

class Mass 
{
public:
//get the input of parameters 
    void setMassAvoirdupoisPounds(double avoirPounds);
    void setMassTroyPounds(double troyPounds);
    void setMassMetricGrams(double metricGrams);
    double getAvoirPounds() const;
    double getTroyPounds() const;
    double getMetricGrams() const;
private:
    double drams;
};

// define the conversion method in different calculation
void AvoirdupoisPounds(Mass& object);
void TroyPounds(Mass& object);
void MetricGrams(Mass& object);

int main(int argc, char* argv[]) 
{
    //Finish the who logic process
}


