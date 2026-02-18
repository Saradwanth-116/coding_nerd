a=int(input("please enter height of the triangle that you want to print:- "))
b=input("please enter a symbol:- ")
c=1
d=a+1
def equiv_tri():
    for i in range(a):
        print(" "*d,end="")
        print(c*b*2)
        c=c+1
        d=d-1

def right_tri():
    for i in range(a):
        print(b*a)
        a=a-1
        
print(right_tri)