
def factorial_rec(n):
    if n==0:
        return 1
    else:
        return n * factorial_rec(n-1)

if __name__ == "__main__":
        print("*.py is being run directly")
        n = int(input("Enter a positive integer: "))
        print("Factorial of %d is: %d\n"%(n,factorial_rec(n)))
else:
    print("*.py is being imported into another module")
