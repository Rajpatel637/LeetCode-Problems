class ParkingSystem {
    int bigSlot;
    int medSlot;
    int smSlot;
public:
    ParkingSystem(int big, int medium, int small) {
        this -> bigSlot = big;
        this ->  medSlot = medium;
        this ->  smSlot = small;
    }

    bool addCar(int carType) {
        if (carType == 1 ){

            if(bigSlot <= 0) return false;
            --bigSlot;
            return true;
        }
        else if(carType == 2 ) {
            if(medSlot <= 0) return false;
            --medSlot;
            return true;
        }
        else if(carType == 3){
            if(smSlot <= 0) return false;
            --smSlot;
            return true;
        } 
        
        return false;   
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */