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
    digit = 0
    first1 = 0
    first2 = 0
    summ = 0
    icard = int(num)
    while True:
        digit += 1
        now = icard % 10
        if (digit % 2) == 1:
            summ += now
        else:
            if (now * 2) < 10:
                summ += now * 2
            else:
                summ += (now * 2) % 10
                summ += ( (now*2) - ( (now*2)%10 ) ) / 10
        first2 = first1
        first1 = now
        icard -= now
        print(icard)
        print("digit = {0}, first1 = {1}, first2 = {2}, now = {3}, summ = {4}".format(digit, first1, first2, now, summ))
        if icard == 0:
            break
        icard /= 10
    print(summ)
