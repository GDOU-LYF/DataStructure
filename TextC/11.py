a=10.2
x=eval(input())
while x!=-100:
    if x>0:
        y=3*a*x*x+4*a*x-1
    elif x<=0:
        y=(a*a+x*x)**0.5
    else:
        print('Error!')
        break
    print("{:.2f}".format(y))
    x=eval(input())