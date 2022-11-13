def dec_to_binary(n):
    bin_num_str=""
    bin_num = 0
    if n >= 1:
        dec_to_binary(n // 2)
        bin_list.append(n % 2)
    
    #print(bin_list)
    #return bin_num


if __name__ == '__main__':
    test_cases = int(input("no. of test cases: "))
    for case in range(1,test_cases+1):
        n = int(input())
        bin_list=[]
        str1=""
        # print (n)
        # Once you have the n value, call the dec_to_binary function to find the binary equivalent of 'n' in 8-bit format
        bin_num = dec_to_binary(n)
        
        bin_str = ''.join([str(elem) for elem in bin_list])
        while len(bin_str)<8:
            bin_str='0'+bin_str
        print(bin_str)
        print('')
        #print(bin_num)