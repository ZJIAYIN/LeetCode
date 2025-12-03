class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),[](vector<int>a,vector<int>b){
            return a[0]<b[0];
        });


        vector<vector<int>>ans;

        int len = intervals.size();

        int le = intervals[0][0];
        int rt = intervals[0][1];
        for(int i = 1;i<len;i++){
            
            int l = intervals[i][0];
            int r = intervals[i][1];

            if(rt >= l){
                rt = max(rt,r);
            }
            else{
                vector<int>tmp;
                tmp.push_back(le);
                tmp.push_back(rt);
                ans.push_back(tmp);

                le = l;
                rt = r;
                continue;
            };
            
        };

         vector<int>tmp;
                tmp.push_back(le);
                tmp.push_back(rt);
                ans.push_back(tmp);

        return ans;

    }
};