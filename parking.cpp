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
};

int main() {
    ParkingSystem parkingSystem;
}