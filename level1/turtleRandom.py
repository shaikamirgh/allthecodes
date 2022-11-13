#This can be used in deciding games where you need to pick randomly
#made from scratch

import turtle
import random as r
t= turtle.Turtle()
ranin=r.randint(360,1999)
t.pencolor('red')
t.color('blue')
t.width(5)
t.shape("arrow")
t.begin_fill()
t.circle(50,ranin)
#t.end_fill()
t.left(90)
t.forward(200)
t.up()
#t.end_fill()
t.hideturtle()
#turtle.done() 
