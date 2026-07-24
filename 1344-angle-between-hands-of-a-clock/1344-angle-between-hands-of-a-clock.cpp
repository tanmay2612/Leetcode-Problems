class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12){
            hour=0;
        }
        double start = (minutes / 12.00) + (hour * 5.00);
        double ans1 = abs(start - minutes);
        double ans2=abs(60-ans1);
         
        return min(ans1,ans2)*6;
    }
};