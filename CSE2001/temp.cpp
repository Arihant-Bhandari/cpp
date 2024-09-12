#include <iostream>
#include <vector>
#include <fstream> // For file handling
using namespace std;

class Soil
{
private:
    string soilType;
    float moisture, humidity;

public:
    Soil(string st = "NULL", float m = 0.0, float h = 0.0) : soilType(st), moisture(m), humidity(h) {}

    // Getter functions
    string getSoilType() const { return soilType; }
    float getMoisture() const { return moisture; }
    float getHumidity() const { return humidity; }

    // Setter functions
    void setSoilType(string st) { soilType = st; }
    void setMoisture(float m) { moisture = m; }
    void setHumidity(float h) { humidity = h; }

    // Function to get soil attributes from user
    void getAttr()
    {
        cout << "Enter Soil: ";
        cin >> soilType;

        cout << "Enter current Moisture level: ";
        cin >> moisture;

        cout << "Enter current Humidity level: ";
        cin >> humidity;
    }
};

class Plant
{
private:
    string type;
    float wateringNeeds;
    vector<string> suitableSoilTypes;

public:
    Plant(string plantType = "", float waterNeeds = 0.0, const vector<string>& suitableSoils = {})
        : type(plantType), wateringNeeds(waterNeeds), suitableSoilTypes(suitableSoils) {}

    // Getter functions
    string getType() const { return type; }
    float getWateringNeeds() const { return wateringNeeds; }
    const vector<string>& getSuitableSoilTypes() const { return suitableSoilTypes; }

    // Setter functions
    void setType(string pt) { type = pt; }
    void setWateringNeeds(float wn) { wateringNeeds = wn; }
    void setSuitableSoilTypes(const vector<string>& sst) { suitableSoilTypes = sst; }

    // Function to get plant attributes from user
    void getAttr()
    {
        cout << "Enter Plant Type: ";
        cin >> type;

        cout << "Enter Watering needs of the plant: ";
        cin >> wateringNeeds;

        int numSoilTypes;
        cout << "Enter the number of suitable soil types for the plant: ";
        cin >> numSoilTypes;

        suitableSoilTypes.resize(numSoilTypes);

        for (int i = 0; i < numSoilTypes; ++i)
        {
            cout << "Enter suitable soil type " << i + 1 << ": ";
            cin >> suitableSoilTypes[i];
        }
    }

    // Function to recommend suitable soils for the plant
    vector<string> recommendSoils(const vector<Soil>& availableSoils) const
    {
        vector<string> recommendedSoils;
        for (const auto& soil : availableSoils)
        {
            for (const auto& requiredSoil : suitableSoilTypes)
            {
                if (soil.getSoilType() == requiredSoil && soil.getMoisture() >= wateringNeeds)
                {
                    recommendedSoils.push_back(soil.getSoilType());
                    break; // Move to the next available soil
                }
            }
        }
        return recommendedSoils;
    }
};

// Function to save soil and plant data to a file
void saveDataToFile(const vector<Soil>& soils, const vector<Plant>& crops, const string& filename)
{
    ofstream outFile(filename);
    if (!outFile)
    {
        cerr << "Error: Unable to open file " << filename << endl;
        return;
    }

    // Write soil data
    outFile << "Soil Details:" << endl;
    for (const auto& soil : soils)
    {
        outFile << "Soil Type: " << soil.getSoilType() << endl;
        outFile << "Moisture Level: " << soil.getMoisture() << endl;
        outFile << "Humidity: " << soil.getHumidity() << endl;
        outFile << endl;
    }

    // Write plant data
    outFile << "Crops Details:" << endl;
    for (const auto& crop : crops)
    {
        outFile << "Plant Type: " << crop.getType() << endl;
        outFile << "Watering Needs: " << crop.getWateringNeeds() << endl;
        outFile << "Suitable Soil Types:" << endl;
        const vector<string>& suitableSoilTypes = crop.getSuitableSoilTypes();
        for (const auto& soilType : suitableSoilTypes)
        {
            outFile << soilType << endl;
        }
        outFile << endl;
    }

    cout << "Data saved to file " << filename << endl;
}

int main()
{
    vector<Soil> soils;
    vector<Plant> crops;

    int numSoils;
    cout << "Enter the number of soil types: ";
    cin >> numSoils;

    cout << "Enter Soil Details:" << endl;
    for (int i = 0; i < numSoils; ++i)
    {
        Soil soil;
        soil.getAttr();
        soils.push_back(soil);
        cout << endl;
    }

    int numCrops;
    cout << "Enter the number of crop types: ";
    cin >> numCrops;

    cout << endl << "Enter Crop Details:" << endl;
    for (int i = 0; i < numCrops; ++i)
    {
        Plant crop;
        crop.getAttr();
        crops.push_back(crop);
        cout << endl;
    }

    // Recommend suitable soils for each crop and display
    for (const auto& crop : crops)
    {
        vector<string> recommendedSoils = crop.recommendSoils(soils);
        cout << "Recommended Soils for " << crop.getType() << ":" << endl;
        for (const auto& soil : recommendedSoils)
        {
            cout << soil << endl;
        }
        cout << endl;
    }

    // Save data to file
    saveDataToFile(soils, crops, "data.txt");

    return 0;
}
