li='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
a=int(input("enter height of the triangle :- "))
n=1
strr=""
for i in range (1,a+1):
    strr=li[:n]
    print(strr,end="")
    n+=1
    print(" ")
    strr=""