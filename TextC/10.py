p,s=1,1
for i in range(1,10+1):
    p*=3**i
    s+=3**i
print("i={},p={},s={}".format(i,p,s))