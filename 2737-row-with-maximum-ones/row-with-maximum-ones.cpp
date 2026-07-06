class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> temp;
        int n=mat.size();
        int oneCount=-1;
        int rowNo=-1;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j =0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>oneCount){
                oneCount=count;
                rowNo=i;

            }

        }
        temp.push_back(rowNo);
        temp.push_back(oneCount);
        return temp;
    }
};