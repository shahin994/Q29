#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int distance;

public:
    Car(std::string brand, std::string model, int distance) : brand(brand), model(model), distance(distance) {}

    void drive(int kilometers) {
        distance += kilometers;
    }

    void showData() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Distance driven: " << distance << "km" << std::endl;
    }
};

int main() {
    std::string brand, model;
    int distance;
    
    std::cout << "Enter the brand of the car: ";
    std::getline(std::cin >> std::ws, brand);

    std::cout << "Enter the model of the car: ";
    std::getline(std::cin >> std::ws, model);

    std::cout << "Enter the initial distance driven by the car (in km): ";
    std::cin >> distance;

    Car myCar(brand, model, distance);

    int additionalDistance;
    std::cout << "Enter the additional distance to drive (in km): ";
    std::cin >> additionalDistance;

    myCar.drive(additionalDistance);
    myCar.showData();

    return 0;
}