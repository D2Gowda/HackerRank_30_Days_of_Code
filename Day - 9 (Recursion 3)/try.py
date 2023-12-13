def factorial(n):
    return 1 if n == 1 else n * factorial(n - 1)

if __name__ == "__main__":
    n = int(input("Enter a number: "))
    print(factorial(n))
