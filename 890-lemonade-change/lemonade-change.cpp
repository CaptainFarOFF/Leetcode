class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0;
        int t = 0;

        for(auto i:bills){
            if(i == 5){
                f++;
            }
            if(i == 10){
                if(f==0)
                    return false;
                t++;
                f--;
            }
            if(i == 20){
                if(t!=0){
                    if(f==0)
                        return false;
                        t--;
                        f--;
                }else{
                    if(f < 3)
                        return false;
                    f-=3;
                }
            }
        }
        return true;
    }
};