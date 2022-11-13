#prints length of each word when input string starts ignoring first letter
if __name__ == '__main__':
    # Take the T (test_cases) input
    test_cases = int(input())
    for j in range(test_cases):
        inp_str =input()
        actual_str=inp_str[1:]
        str_list=actual_str.split()
        for word in str_list[0:-1]:
            print(len(word),end=",")
        print(len(str_list[-1]))
        #print(actual_str)