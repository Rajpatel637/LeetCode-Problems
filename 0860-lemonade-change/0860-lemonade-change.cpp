class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0] > 5) return false;

        int five = 0;
        int ten = 0;
        int twenty = 0;

        for(int i = 0; i < bills.size();i++){
            int bill = bills[i];

            if(bill == 5){
                five++;
            }
            else{
                if(bill == 10){
                    if(five > 0) {
                        ten++;
                        five--;
                    }
                    else return false;
                }
                else if(bill == 20){
                    if(ten > 0 && five > 0){
                        ten--;
                        five--;
                        twenty++;
                    }
                    else if(five >= 3){
                        five -= 3;
                        twenty++;
                    }
                    else return false;
                }
            }
        }

        return true;
    }
};