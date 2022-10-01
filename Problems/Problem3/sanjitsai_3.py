def fibonacci(n):
    if n<=1:
        return n 
    else:
        return fibonacci(n-1) + fibonacci(n-2)

def get_fibonacci_series(n):
    list_a = []
    for i in range(n):
        result = fibonacci(i)
        list_a.append(result)
    list_a.sort()
    return list_a

n = int(input())
result = get_fibonacci_series(n)
print(result)
