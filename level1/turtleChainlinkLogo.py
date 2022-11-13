#made when I was beginning to learn turtle
#its the chainlink logo
import turtle
import random as r
t= turtle.Turtle()
ranin=r.randint(360,999)
t.pencolor('red')
t.color('blue')
t.width(20)
t.begin_fill()
t.left(0)
t.down()
t.circle(90,360,6)
t.up()
#t.end_fill()
t.hideturtle()
#turtle.done() 
