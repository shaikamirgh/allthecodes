# Function to calculate Euclidean distance between two points
import math
def compute_distance(x1, y1, x2, y2):
    #distance = 0.00
    distance = math.sqrt(((x2-x1)**2)+((y2-y1)**2))
    print("Distance: {:.2f}".format(distance))
    # print the distance value with precision up to 2 decimal places


# Main function
if __name__ == '__main__':
    
    # Take the T (test_cases) input
    test_cases = int(input("no. of TestCases:"))

    # Write the code here to take the x1, y1, x2 and y2 values
    for j in range(test_cases):
        x1, y1, x2, y2 = map(float,input().split())
        print(x1,y1,x2,y2)
        compute_distance(x1, y1, x2, y2)