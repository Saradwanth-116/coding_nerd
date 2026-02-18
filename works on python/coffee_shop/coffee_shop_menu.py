print("""HELLOW!! 
      WELCOME TO  SHITTY COFFEE SHOP.
      HOW MAY I HELP YOU?!?!?!?!?!?""")
import time as t
import pandas as pd
import random
a=pd.read_csv('C:\\Sanju prop\\deep stuff\\codee\\pytho\\ity-bity_projects\\coffee_shop\\menu.csv')
menu=pd.DataFrame(a)
while True:
    GEE=int(input("""PRESS 1: FOR MENUE
    PRESS 2: FOR NUCLEAR LAUNCH CODES
    PRESS 3: FOR SHAVING CREAM
    PRESS 4: FOR A COFFEE
    PRESS 5: FOR A BIRIYANI
    PRESS 6: FOR AND RANDOM CHOICE!(S) from menu
    PRESS 7: FOR AND RANDOM CHOICE(S) from menu
                  
        ENTER YOUR NUMBER: """))

    if GEE ==1 :
            print("WHAT WOULD U DO WITH THE MENU. ITS A FKN COFFEE SHOP ORDER SOME COFFEE YOU MORON")
            t.sleep(2)
            print("ANYWAYS HERE IS IT....\n")
            t.sleep(0.7)
            print(menu)
            t.sleep(2)
            while True:
                what=int(input("what is ur choice as a number?..."))
                if what in range(0,9):
                    print("ok coming right up!! ")
                    break
                else:
                    print("are you fkn kidding me? go have a checkup on your eeyes!!")
            break
    elif GEE ==2:
        print("ARE YOU OUT OF YOUR MIND??, THIS IS A COFFEE SHOP. THIS IS'NT DARK WEB DICKHEAD")
        
    elif GEE ==3:
        print("not available here, are you out of your mind?")
        
    elif GEE ==4:
        print("good choice sir coimn in hot..... please wait for 5 min")
        break
    elif GEE ==5:
        print("IT IS NOT AVAILABLE DIPSHIT!!")
        break
    elif GEE ==6:
        t.sleep(2)
        print("rich ass ahh???")
        a=random.randint(1,10)
        t.sleep(1)
        if a==1:
            print("gonna get Espresso")
        if a==2:
            print("gonna get Latte")
        if a==3:
            print("gonna get Cappuccino")
        if a==4:
            print("gonna get Americano")
        if a==5:
            print("gonna get Green Tea")
        if a==6:
            print("gonna get Black Tea")
        if a==7:
            print("gonna get Croissant")
        if a==8:
            print("gonna get Muffin")
        if a==9:
            print("gonna get EsprTurkey Clubesso")
        if a==10:
            print("gonna get Soup of the Day")
        break
    elif GEE==7:
        a=random.randint(0,5)
        b=random.randint(6,9)
        c=menu.iloc[a,1]
        d=menu.iloc[b,1]
        print("gonna get ",c," and ",d," then!")
        break
    else:
         print("i am done u are so much retarded to type a number between 1-6")
         break