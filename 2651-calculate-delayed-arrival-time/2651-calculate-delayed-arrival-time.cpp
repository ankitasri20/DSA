class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int  totalTime = arrivalTime + delayedTime;
        int ans = 0;
        if(totalTime < 24) return totalTime;
        else ans = totalTime % 24;
        
        return ans;
    }
};