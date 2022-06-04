# Calculator GUI 
# Made By : Shubh Aggarwal

# Starting window
from tkinter import *
win = Tk()
win.title("Calculator")

# positional value
c = 0

# entry functions
def one():
    global c
    c = c + 1
    e.insert(c, "1" )

def two():
    global c
    c = c + 1
    e.insert(c, "2" )

def three():
    global c
    c = c + 1
    e.insert(c, "3" )


def four():
    global c
    c = c + 1
    e.insert(c, "4" )

def five():
    global c
    c = c + 1
    e.insert(c, "5" )

def six():
    global c
    c = c + 1
    e.insert(c, "6" )


def seven():
    global c
    c = c + 1
    e.insert(c, "7" )

def eight():
    global c
    c = c + 1
    e.insert(c, "8" )

def nine(): 
    global c
    c = c + 1
    e.insert(c, "9" )

def zero():
    global c
    c = c + 1
    e.insert(c, "0" )

def add():
    global c
    c = c + 1
    e.insert(c, "+" )

def sub():
    global c
    c = c + 1
    e.insert(c, "-" )

def mul():
    global c
    c = c + 1
    e.insert(c, "*" )

def div():
    global c
    c = c + 1
    e.insert(c, "/" )

def clear():
    global c
    c = c - 1
    e.delete(c, "end" )

def aclear():
    global c
    e.delete(0, 'end')

# Calcutor function
def eqc():
    try:
        a = eval(str(e.get()))
        e.delete(0, "end" )
        e.insert(0, a)

    except:
        e.delete(0, "end" )
        e.insert(0, "Error")
    




# entry widget
e = Entry(win, width = 21,font=("Helvetica", 20))
e.grid(column =0 ,row =0, columnspan = 5)

# buttons
o1 = Button(win, text = "+", width = 10, height = 5, command = add, bg = "#6699ff")
o1.grid(column =4 ,row =2 )
o2 = Button(win, text = "-", width = 10, height = 5, command = sub, bg = "#6699ff")
o2.grid(column =4 ,row =3 )
o3 = Button(win, text = "*", width = 10, height = 5, command = mul, bg = "#6699ff")
o3.grid(column =4 ,row =4 )
o4 = Button(win, text = "/", width = 10, height = 5, command = div, bg = "#6699ff")
o4.grid(column =4 ,row =5 )

cl  = Button(win, text = "C", width = 21, height = 5, command = clear, bg = "#00ff99")
cl.grid(column =0 ,row =1, columnspan = 2 )
ac = Button(win, text = "AC", width = 21, height = 5, command = aclear, bg = "#00ff99")
ac.grid(column =2 ,row =1, columnspan = 3 )
eq = Button(win, text = "=", width = 10, height = 5, command = eqc, bg = "#00ff99") 
eq.grid(column =2 ,row =5 )

n1 = Button(win, text = "1", width = 10, height = 5, command = one, bg = "#ff3333")
n1.grid(column =0 ,row =2 )
n2 = Button(win, text = "2", width = 10, height = 5, command = two, bg = "#ff3333")
n2.grid(column =1 ,row =2 )
n3 = Button(win, text = "3", width = 10, height = 5, command = three, bg = "#ff3333")
n3.grid(column =2 ,row =2 )
n4 = Button(win, text = "4", width = 10, height = 5, command =  four, bg = "#ff3333")
n4.grid(column =0 ,row =3 )
n5 = Button(win, text = "5", width = 10, height = 5, command =  five, bg = "#ff3333")
n5.grid(column =1 ,row =3 )
n6 = Button(win, text = "6", width = 10, height = 5, command =  six, bg = "#ff3333")
n6.grid(column =2 ,row =3 )
n7 = Button(win, text = "7", width = 10, height = 5, command =  seven, bg = "#ff3333")
n7.grid(column =0 ,row =4 )
n8 = Button(win, text = "8", width = 10, height = 5, command =  eight, bg = "#ff3333")
n8.grid(column =1 ,row =4 )
n9 = Button(win, text = "9", width = 10, height = 5, command = nine, bg = "#ff3333")
n9.grid(column =2 ,row =4 )
n0 = Button(win, text = "0",width = 22, height = 5, command = zero, bg = "#00ff99")
n0.grid(column =0 ,row =5, columnspan = 2 )

# Window end
win.mainloop()