def Bubble_Sort(our_list):
    our_sort_list=our_list.copy()
    for i in range(len(our_sort_list)):
        for j in range(len(our_sort_list)-1):
            if our_sort_list[j]>our_sort_list[i]:
                our_sort_list[i],our_sort_list[j]=\
                our_sort_list[j],our_sort_list[i]
    return our_sort_list

def Bubble_Sort1(our_list):
    our_sort_list=our_list.copy()

    for i in range(len(our_sort_list)-1,0,-1):
        flag=0
        for j in range(i):
            if our_sort_list[j]>our_sort_list[j+1]:
                our_sort_list[j],our_sort_list[j+1]=\
                our_sort_list[j+1],our_sort_list[j]
                flag=1
        if flag==0:
            break
    return our_sort_list

def main( ):
    our=list(map(eval,"125438976"))
    print(our)
    print(Bubble_Sort1(our))
    print(our)
    return 0
main()
