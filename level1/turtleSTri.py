import turtle
import random as r
t= turtle.Turtle()
t.speed(0)

def mid(p1, p2):
    return ((p1[0] + p2[0]) / 2, (p1[1] + p2[1]) / 2)

p1=(0,300)
p2=(230,-150)
p3=(-230,-150)
np=()
rpt=r.choice([p1,p2,p3])
np=(100,100)

t.up()
t.goto(p1)
t.dot(10)

t.up()
t.goto(p2)
t.dot(10)

t.up()
t.goto(p3)
t.dot(10)

t.up()
t.goto(np)
t.dot(10)

for i in range(100):
    np=mid(p1,np)
    t.up()
    t.goto(np)
    t.dot(6)
    
    np=mid(p2,np)
    t.up()
    t.goto(np)
    t.dot(6)
    
    np=mid(p3,np)
    t.up()
    t.goto(np)
    t.dot(6)

t.up()
t.goto(np)
t.dot(10)

t.up()
t.goto(-100,-100)
t.write("DONE!!", move=True)

t.hideturtle()
turtle.done()