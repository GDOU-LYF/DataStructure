def Bubble_Sort(our_list):
    our_sort_list=our_list.copy()
    for i in range(len(our_sort_list)):
        for j in range(len(our_sort_list)-1):
            if our_sort_list[j]>our_sort_list[i]:
                our_sort_list[i],our_sort_list[j]=\
                our_sort_list[j],our_sort_list[i]
    return our_sort_list

def main( ):
    our=list("125438976")
    #out=list()
    out=list(map(eval,our))
    # for i in map(eval,our):
    #     out.append(i)
    print(out)
    print(Bubble_Sort(out))
    print(out)
    return 0
main()
