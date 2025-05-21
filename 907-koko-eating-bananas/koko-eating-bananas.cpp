class Solution {
public:

    bool check(int speed, vector<int>& piles, int h){
        int n = piles.size();
        int count = 0;
        for(int i=0; i<n; i++){
            if(count>h) return false;
            if(speed >= piles[i]) count++;
            else if(piles[i]%speed == 0) count += piles[i]/speed;
            else count += piles[i]/speed+1;
        }
        if(count>h) return false;
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max = INT_MIN;
        for(int i = 0; i<n; i++){
            if(max<piles[i]) max = piles[i];
        }
        int lo = 1;
        int hi = max;
        int ans = -1;
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;
            if(check(mid, piles,h)){
                ans = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return ans;
    }
};