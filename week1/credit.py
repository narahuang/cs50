#!/usr/bin/python3
# This program would verify credit card number

def getinput():
    while 1:
        number = input("Number: ")
        try:
            if int(number) > 0:
                return number
        except:
            print("Retry:")
            
if __name__ == "__main__":
    num = getinput()
    print(type(num))
    print(num)
