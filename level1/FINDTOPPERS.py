#find toppers, if same return in acending order of names

test_cases = int(input("no.of test cases:"))
for j in range(test_cases):
    n =int(input("how may peeps: "))
    i=0
    top_marks=0.00
    top_name =""
    student={}
    for i in range(n):
        name , str_marks =map(str,input("enter name and their marks: ").split())
        marks=float(str_marks)
        student[name]=marks
        #print(student)
        #print(marks)
        top_marks = max(student.values())
        top_list = [k for k, v in student.items() if v == top_marks]
        top_list.sort()
        #if (marks>top_marks):
        #    top_marks=marks
        #    top_name=name
    for toppers in top_list:
        print(toppers)