# Python 3 program to print
# sierpinski triangle.

def printSierpinski( n) :
    
    y = n - 1
    while(y >= 0) :
        
        # printing space till
        # the value of y
        i = 0
        while(i < y ):
            print(" ",end="")
            i = i + 1

        # printing '*'
        x = 0
        while(x + y < n ):

            # printing '*' at the appropriate
            # position is done by the and
            # value of x and y wherever value
            # is 0 we have printed '*'
            if ((x & y) != 0) :
                print(" ", end = " ")
            else :
                print(". ", end = "")
            x =x + 1
        
        print()
        y = y - 1
        
# Driver code
n = 64#32,64

# Function calling
printSierpinski(n)


# This code is contributed by Nikita Tiwari.
