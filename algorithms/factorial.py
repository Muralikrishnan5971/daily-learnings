def factorial_recursive(num):
    if num == 0: return 1
    else: return num * factorial_recursive(num - 1)

def factorial_iterative(num):
    fact = 1
    if num == 0: return 1
    else:
        for i in range(1, num + 1):
            fact = fact * i
    return fact

def fibonacci(num):
    pass
print(factorial_iterative(10))
print(factorial_recursive(10))
