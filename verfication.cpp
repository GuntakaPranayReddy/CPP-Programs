// 2sumproblem problem another method
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    unordered_map<int, int> mpp;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int target, p = -1, q = -1;
    cin >> target;                       // each input has exactly one solution.
    
    vector<int> psum(n); // Initialize the prefix sum vector
    psum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        psum[i] = arr[i] + psum[i - 1]; // Calculate correct prefix sum
    }
    
    for (int i = 0; i < n; i++)
    {
        if (psum[i] == target)
        {
            q = i; 
            p = i - 1;
            break;
        }
        if (mpp.find(psum[i] - target) != mpp.end())
        {
            q = i;
            p = mpp[psum[i] - target];
            break;
        }
        mpp[psum[i]] = i; // Store the current prefix sum and its index
    }
    
    cout << p << "," << q << endl;
    
    return 0;
}
 // this is set zeroes matrix best method just look into and understand this and make it in c++.
 /*
Time Complexity:O(N*M),Where N is the number of row and M is number of column of matrix.Here two nested loops creates the time complexity.
Space Complexity : O(1), Constant space.
 */
/*
 void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool flag1 = false, flag2 = false;
        for(int i=0; i<n; i++){
            if(matrix[i][0] == 0){
                flag1 = true;
            }
        }
        for(int j=0; j<m; j++){
            if(matrix[0][j] == 0){
                flag2 = true;
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(flag1 == true){
            for(int i=0; i<n; i++){
                matrix[i][0] = 0;
            }
        }
        if(flag2 == true){
            for(int j=0; j<m; j++){
                matrix[0][j] = 0;
            }
        }
    }
};
*/