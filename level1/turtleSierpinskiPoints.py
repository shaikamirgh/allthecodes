#got idea from this https://www.instagram.com/p/Cl4WkH9OPXc/
import turtle
import random as r
t= turtle.Turtle()

def mid(p1, p2):
    return ((p1[0] + p2[0]) / 2, (p1[1] + p2[1]) / 2)
#initializing the points coordinates
p1=(0,300)
p2=(230,-150)
p3=(-230,-150)
np=()
rpt=r.choice([p1,p2,p3])
np=(100,100)                    #current new point

#initializing the points
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

for i in range(1000):
    t.speed(0)
    rpt=r.choice([p1,p2,p3])
    np=mid(rpt,np)
    t.up()
    t.goto(np)
    t.dot(9)

t.up()
t.goto(np)
t.dot(10)

t.up()
t.goto(-250,-250)
t.write("DONE!!", move=True)

t.hideturtle()
turtle.done()