class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<vector<int>> vi;
        vector<int> a,b;
        a.push_back(1);
        b.push_back(1);
        b.push_back(1);
        vi.push_back(a);
        vi.push_back(b);
        for(int i=2;i<n+1;i++){
            vector<int> va;
            va.push_back(1);
            for(int j=1;j<i;j++){
                va.push_back(vi[i-1][j]+vi[i-1][j-1]);
                }
            va.push_back(1);
             vi.push_back(va);
        }
        return vi[n];
       
    }
};