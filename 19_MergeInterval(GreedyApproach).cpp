class Solution {
public:
    static bool compareInterval(vector<int> &a1,vector<int>& a2){
         return a1[0]<a2[0];
     }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> Result;
        sort(intervals.begin(),intervals.end(),compareInterval);
        int first=intervals[0][0];
        int last=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=last){
                 last=max(last,intervals[i][1]);
            }
            else{
                Result.push_back({first,last});
                first=intervals[i][0];
                last=intervals[i][1];
            }
    }
        Result.push_back({first,last});
        return Result;
    }
    
    
};

   