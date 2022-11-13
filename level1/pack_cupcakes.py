t= int(input("no.of test cases: "))
import math

max_rem=0
max_a=0
for i in range(t):
    n=int(input("no of cup cakes: "))
    '''
    for a in range(2,n+1):
        rem=n%a
        if rem>=max_rem:
            max_rem=rem
            max_a=a
    '''
    print("max number of cupcakes in one packet so that chef can eat remaining max are: ")
    if n%2==0:
        print(int((n/2)+1))
    else:
        mx=math.ceil(n/2)
        print(mx)


'''
Problem
Now that Chef has finished baking and frosting his cupcakes, it's time to package them. Chef has N cupcakes, and needs to decide how many cupcakes to place in each package. Each package must contain the same number of cupcakes. Chef will choose an integer A between 1 and N, inclusive, and place exactly A cupcakes into each package. Chef makes as many packages as possible. Chef then gets to eat the remaining cupcakes. Chef enjoys eating cupcakes very much. Help Chef choose the package size A that will let him eat as many cupcakes as possible.

Input
Input begins with an integer T, the number of test cases. Each test case consists of a single integer N, the number of cupcakes.

Output
For each test case, output the package size that will maximize the number of leftover cupcakes. If multiple package sizes will result in the same number of leftover cupcakes, print the largest such size.

Constraints
1 ≤ T ≤ 1000
2 ≤ N ≤ 100000000 (108)
Sample 1:
Input
Output
2
2
5
2
3
Explanation:
In the first test case, there will be no leftover cupcakes regardless of the size Chef chooses, so he chooses the largest possible size. In the second test case, there will be 2 leftover cupcakes.
'''


