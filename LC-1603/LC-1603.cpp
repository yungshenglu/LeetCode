class ParkingSystem {
public:
    /**
     * Concepts
     * 1. ParkingSystem: Create the object with assigned parameters
     * 2. addCar: Determine the number of parking lot in each size
     */ 
    ParkingSystem(int big, int medium, int small) {
        this->_big = big;
        this->_medium = medium;
        this->_small = small;
    }

    bool addCar(int carType) {
        switch (carType) {
            case 1:
                return (this->_big) ? this->_big-- : false;
            case 2:
                return (this->_medium) ? this->_medium-- : false;
            case 3:
                return (this->_small) ? this->_small-- : false;
        }
        return false;
    }

private:
    int _big = 0;
    int _medium = 0;
    int _small = 0;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */