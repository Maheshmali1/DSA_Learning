/* 
Problem : 

Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:

Input:
N = 5
Output: 1 1 2 3 5


Example 2:

Input:
N = 7
Output: 1 1 2 3 5 8 13
Your Task:
Your task is to complete printFibb() which takes single argument N and returns a list of first N Fibonacci numbers.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
Note: This space is used to store and return the answer for printing purpose.

Constraints:
1<= N <=84

*/

// solution  : 

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> vec;
        if(n == 1){
            vec.push_back(1);
            return vec;
        }
        vec.push_back(1);
        vec.push_back(1);
        for(int i=2;i<n;i++){
            vec.push_back(vec.at(i-1)+ vec.at(i-2));
        }
        return vec;
        //code here
    }
};
