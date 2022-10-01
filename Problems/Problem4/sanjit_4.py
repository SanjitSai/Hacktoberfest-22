def primeSum( arr, n):
    # Find maximum value in the array
    max_val = max(arr)
 
    # USE SIEVE TO FIND ALL PRIME NUMBERS LESS
    # THAN OR EQUAL TO max_val
    # Create a boolean array "prime[0..n]". A
    # value in prime[i] will finally be False
    # if i is Not a prime, else true.
    prime=[True for i in range(max_val + 1)]
 
    # Remaining part of SIEVE
    prime[0] = False
    prime[1] = False
    for p in range(2, max_val + 1):
        if(p * p > max_val):
            break
 
        # If prime[p] is not changed, then
        # it is a prime
        if (prime[p] == True):
 
            # Update all multiples of p
            for i in range(p * 2, max_val+1, p):
                prime[i] = False
 
    # Sum all primes in arr[]
    sum = 0
 
    for i in range(n):
        if (prime[arr[i]]):
            sum += arr[i]
 
    return sum
 
# Driver code
arr =[1, 2, 3, 4, 5, 6, 7]
 
n = len(arr)
 
print(primeSum(arr, n))
