def f(ls):
    ret=0
    for i in range(len(ls)):
        ret+=ls[i]**2
    return ret

ls=list(map(eval,list("111111")))
print("%d"%f(ls))
