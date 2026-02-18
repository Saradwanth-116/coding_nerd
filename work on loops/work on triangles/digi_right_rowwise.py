a=int(input("enter height of the triangle :- "))
n=1
for i in range (1,a+1):
    for j in range(i-1):
        print(n," ",end="")   
    print(n)
    n+=1