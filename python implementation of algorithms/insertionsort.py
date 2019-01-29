def insertionsort(arr):
    for i in range(1,len(arr)):
        key=arr[i]
        j=i-1
        while(j >= 0 and key < arr[j]):
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key

arr=[1,4,7,2,9,5,6,10]
insertionsort(arr)
for i in range(len(arr)):
    print(arr[i])
