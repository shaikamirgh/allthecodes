import turtle
import random as r
t= turtle.Turtle()
ranin=r.randint(360,999)
t.pencolor('red')
t.color('blue')
t.width(20)
t.begin_fill()
t.shape("turtle")
t.speed(0.6)
t.left(0)
t.forward(250)
t.right(90)
t.forward(250)
t.right(90)
t.forward(250)
t.right(90)
t.forward(250)
t.hideturtle()
t.end_fill()
turtle.done() 