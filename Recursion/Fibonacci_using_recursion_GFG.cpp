/*
Title: Fibonacci using recursion (GFG)
Date: 16 June 2025

Problem:
Fibonacci Using Recursion

Difficulty: BasicAccuracy: 78.37%Submissions: 62K+Points: 1

You are given a number n. You need to find nth Fibonacci number.

F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1



Example:



Input: n = 1

Output: 1

Explanation: The first fibonacci number is 1

Input: n = 20

Output: 6765

Explanation: The 20th fibonacci number is 6765

Constraints:

1 <= n <= 20
*/

class Solution {
public:
    int fibonacci(int n) {
        // Code here
        if(n==1 || n==2) return 1;
        return fibonacci(n-1)+fibonacci(n-2);
    }
};
