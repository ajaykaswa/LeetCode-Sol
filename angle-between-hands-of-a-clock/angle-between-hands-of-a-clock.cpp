class Solution {
public:
    double angleClock(int hour, int minutes) {
        double mindiff=minutes*6;
        double hourdiff=(hour % 12 ) * 30 + minutes * 0.5;
        double ans=abs(mindiff-hourdiff);
        return min(ans,360-ans);
    }
};