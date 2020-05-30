import math
def isp(n):
    if n==2 or n==3:
        return 1
    else :
        for i in range(2,int(math.sqrt(n))+1):
            if n%i==0:
                return 0
        return 1

for i in range(100,201):
    if(isp(i)):
        print("%d\t"%i,end='')