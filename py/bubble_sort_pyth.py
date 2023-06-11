def bubblesort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(i+1,n):
            if arr[i]>arr[j]:
                arr[i],arr[j]=arr[j],arr[i]
    

print ('Hello World')
arr=[10,234,56,71,3,45]
bubblesort(arr)

print('The sorted array is ')
for i in range(len(arr)):
    print("%d" %arr[i])
