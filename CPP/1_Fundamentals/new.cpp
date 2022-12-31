#include <iostream>
#include <vector>
#include <algorithm>
#include<list>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> matrix1;
        int x = matrix.size();
        
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < x; j++)
            {
                matrix1[j][x-i-1] = matrix[i][j];
            }
        }
        matrix = matrix1;
    }
};
 
int main()
{
    vector<vector<int>> matrix = {5,1,9,11,2,4,8,10,13,3,6,7,15,14,12,16};

    rotate(matrix);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }  
    
    return 0;
}