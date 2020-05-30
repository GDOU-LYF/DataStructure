a,b=eval(input())
MA,MB=a,b
while b>0:
    temp=a%b
    a=b
    b=temp

if MA/a>MB/a:
    print("最小公倍数数{}".format(MA/a))
else:
    print("最小公倍数数{}".format(MB/a))