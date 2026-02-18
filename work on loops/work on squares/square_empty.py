a=int(input("enter height of the triangle"))
if(a==1):
    print("*")
else:
        print(a*"* ")
        for i in range(a-2):
                print("* "+"  "*(a-2)+"*" )
        print(a*"* ")
