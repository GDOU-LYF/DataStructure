N=eval(input())
f,g=1,0
while N>0:
    g+=f
    f=g-f
    N-=1

print("%d"%g)