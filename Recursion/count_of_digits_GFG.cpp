/*
Title: count of digits (GFG)
Date: 16 June 2025

Problem:
Count Total Digits in a Number

Difficulty: EasyAccuracy: 42.13%Submissions: 89K+Points: 2

You are given a number n. You need to find the count of digits in n.



Example 1:



Input:

n = 1

Output: 

1

Explanation: 

Number of digit in 1 is 1.

Example 2:



Input:

n  = 99999

Output: 

5

Explanation:

Number of digit in 99999 is 5

Your Task:

You don't need to read input or print anything. Your task is to complete the function countDigits() that takes n as parameter and returns the count of digits in n.



Constraints:

1 <= n <= 109
*/

class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int count=1;
        if(n<10) return count;
        else{
            count=1+countDigits(n/10);
        }
        return count;
    }
};
