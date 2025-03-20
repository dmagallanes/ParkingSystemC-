#include <iostream>
#include <unordered_map>

using namespace std;

class ParkingSystem {
    private:
    unordered_map<int,bool> map;

    public:
    ParkingSystem() {
        for(int i = 0; i < 10; i++) {
            map[i + 100] = false;
        }
    }

    void displayParkingSpots() {
        for(auto itr = map.begin(); itr != map.end(); itr++) {
            cout << "\nParking Spot: " << itr-> first << " Availability: " << itr->second;
        }
        cout << endl;
    }
};

int main() {
    ParkingSystem parkingSystem;
    parkingSystem.displayParkingSpots();
}