class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int r=points.size(),c=points[0].size();
        vector<long long> row(points[0].begin(), points[0].end());
        for(int i=1;i<r;i++){
            vector<long long>next_row(points[i].begin(), points[i].end());
            vector<long long>left(c,0),right(c,0);
            left[0]=row[0];
            for(int l=1;l<c;l++){
                left[l]=max(left[l-1]-1,row[l]);
            }
            right[c-1]=row[c-1];
            for(int r=c-2;r>=0;r--){
                right[r]=max(right[r+1]-1,row[r]);
            }
            for(int j=0;j<c;j++){
                next_row[j]+=max(left[j],right[j]);
            }
            row=next_row;
        }
        long long ans=INT_MIN;
        for(int i=0;i<c;i++){
            ans=max(ans,row[i]);
        }
        return ans;
    }
};