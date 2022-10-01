## function that merges two sorted lists into a new sorted list.

def merge(l1,l2):
    n=len(l1)
    m=len(l2)
    i=0
    j=0
    arr=[]
    while i<n and j<m:
        if l1[i]<=l2[j]:
            arr.append(l1[i])
            i+=1
        else:
            arr.append(l2[j])
            j+=1
    if i<n:
        for k in range(i,n):
            arr.append(l1[k])
    if j<m:
        for k in range(j,m):
            arr.append(l2[k])
    return arr 
a=list(map(int,input().split()))
b=list(map(int,input().split()))
ans=merge(a,b)
for val in ans:
    print(val,end=" ")
print(end="\n")