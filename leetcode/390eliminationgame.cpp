class Solution {
public:
    int lastRemaining(int n) {
        if(n==1) return 1; 
        return 2*(1+n/2-lastRemaining(n/2));
    }
};

/*
You have a list arr of all integers in the range [1, n] sorted in a strictly increasing order. Apply the following algorithm on arr:
•	Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.
•	Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.
•	Keep repeating the steps again, alternating left to right and right to left, until a single number remains.
Given the integer n, return the last number that remains in arr.
Example 1:
Input: n = 9
Output: 6
Explanation:
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
arr = [2, 4, 6, 8]
arr = [2, 6]
arr = [6]

N=9
1,2,3,4,5,6,7,8,9
1.Eliminate from start 1 alternate 1 3 5 7 9
	2 4 6 8  

2. eliminate from last 8 4
=> 2 6
3. from start
Ans=> 6

Approach/formula
	f(n) L->R  = 2 4 6 8
	 2 * (1,2,3,4)             //length (1,2,3,4)    => n/2   f(n) = 9 
	f(n) L->R = 2 * f(n/2)R->L                //  left side is L->R and right is  R->L  to generate recursive relation both should be in same direction
	we can write f(n/2) as   (1,2,…, n/2) R->L 
o	 f(n/2) = (n/2,…,2 , 1) L-> R
        f(n/2) =             (1 , 2 , … , n/2) L->R                 //    1+ n/2 – f(n/2) return this ans
	f(n) L->R =  2*(1+n/2 – f(n/2)L->R)

*/