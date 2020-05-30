X=eval(input())
ls=[1,]

for i in range(1,10+1):
    sum=1
    for j in range(1,i+1):
        sum*=j
    ls.append(sum)
flag=1
ret=0
for i in  range(1,10+1):
    ret+=flag*X**i/ls[i]
    flag=-flag
print("{}".format(ret))