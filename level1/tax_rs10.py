t= int(input("no of test cases: "))
for i in range(t):
    n=int(input("income: "))
    if(n>100):
        n=n-10
    print(n)







'''
Problem
In Chefland, a tax of rupees 1010 is deducted if the total income is strictly greater than rupees 100100.

Given that total income is XX rupees, find out how much money you get.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains a single integer XX — your total income.
Output Format
For each test case, output on a new line, the amount of money you get.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq X \leq 10001≤X≤1000
Sample 1:
Input
Output
4
5
105
101
100
5
95
91
100
Explanation:
Test case 11: Your total income is 55 rupees which is less than 100100 rupees. Thus, no tax would be deducted and you get 55 rupees.
'''