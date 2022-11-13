#upto given limit in input,
    #if odd then square
    #if even then double
    #if zero add three




if __name__ == '__main__':
    # Take the T (test_cases) input
    test_cases = int(input("no. of test_cases: "))
    for j in range(test_cases):
        n =int(input("enter limit: "))
        print(' ')
        for i in range(n):
            if (i!=0):
                if(i%2==1):
                    print(i*i,end=" ")
                else:
                    print(2*i,end=" ")
            else:
                print(i+3,end=" ")