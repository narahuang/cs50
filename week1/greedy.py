#!/usr/bin/python3
# This program would calculate how many coin would be used in change.

def getmoney():
    while 1:
        money = input("How much change is owed?\n")
        try:
            if float(money) > 0:
                return money
        except:
            print("Retry:")

def checkchange(m):
    m100 = int(float(m) * 100)
    quarter = int(m100 / 25)
    m100 = m100 - (quarter * 25)
    dime = int(m100 / 10)
    m100 = m100 - (dime * 10)
    nickel = int(m100 / 5)
    m100 = m100 - (nickel * 5)
    return quarter + dime + nickel + m100

if __name__ == "__main__":
    m = getmoney()
    print(checkchange(m))
