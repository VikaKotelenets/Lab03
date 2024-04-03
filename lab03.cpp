#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FoodProduct {
    private:
    string name;
     double portionWeight;
     int energyValue; 
     double proteinContent;
     double fatContent;
     double carbContent;

     public:
      FoodProduct(string n, double pw, int ev, double pc, double fc, double cc)
        : name(n), portionWeight(pw), energyValue(ev), proteinContent(pc), fatContent(fc), carbContent(cc) {}

        string getName() const { return name; }
    double getPortionWeight() const { return portionWeight; }
    int getEnergyValue() const { return energyValue; }
    double getProteinContent() const { return proteinContent; }
    double getFatContent() const { return fatContent; }
    double getCarbContent() const { return carbContent; }
};

int calculateTotalEnergy(const vector<FoodProduct>& meal) {
    int totalEnergy = 0;
    for (const auto& food : meal) {
        totalEnergy += food.getEnergyValue();
    }
    return totalEnergy;
}

int main() {
    FoodProduct salad("Salad", 150, 50, 30, 2, 10);
    FoodProduct chicken("Chicken Breast", 200, 300, 400, 5, 0);
    FoodProduct rice("Brown Rice", 100, 150, 3, 2, 30);

     vector<FoodProduct> meal = {salad, chicken, rice};

 int totalEnergy = calculateTotalEnergy(meal);
    cout << "Total energy value of the meal: " << totalEnergy << " calories" << endl;

    return 0;
}