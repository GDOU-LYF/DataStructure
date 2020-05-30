a,b=eval(input())
while b>0:
    temp=a%b
    a=b
    b=temp

print("最大公约数{}".format(a))