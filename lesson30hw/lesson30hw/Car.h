#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
protected:
    float gasTank;
    float consumption; // gas per 100km
public:
    Car() {
         gasTank = 0;  consumption = 0;
    };
    Car(float price, int year, float maxSpeed, float gasTank, float consumption) : Vehicle(price, year, maxSpeed)
    {
        this->gasTank = gasTank;
        this->consumption = consumption;
    };

    void setGasTank(float gasTank) { this->gasTank = gasTank; };
    void setConsumption(float consumption) { this->consumption = consumption; };
    float getGasTank()const { return gasTank; };
    float getConsumption()const { return consumption; };
      
    void showInfo()const override {
        cout << "Price: " << price << "usd" << endl;
        cout << "Year: " << year << endl;
        cout << "Max speed: " << maxSpeed << "km/h" << endl;
        cout << "Gas tank: " << gasTank << "l" << endl;
        cout << "Consumption of gas per 100km: " << consumption << "l" << endl;
        cout << "Max distance without refill: " << (gasTank / consumption) * 100 << " km" << endl;
    }

    float ride(float distance) override {
        return distance / maxSpeed;
    }
    virtual float gasDistance(float distance) { //inheritance needed?
        return distance * (consumption / 100);
    }

    virtual void load(ifstream& file) override {
        file >> price;
        file >> year;
        file >> maxSpeed;
        file >> gasTank;
        file >> consumption;

    };
};

