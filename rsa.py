from math import gcd

#function to perform RSA approch
def RSA(p: int, q: int, message: int):
    # calculating n
    n = p * q

    # calculating totient, t
    t = (p - 1) * (q - 1)

    # selecting public key, e
    for i in range(2, t):
        if gcd(i, t) == 1:
            e = i
            break
    
    # selecting private key, d
    j = 0
    while True:
        if (j * e) % t == 1:
            d = j
            break
        j += 1

    # performing encryption
    ct = (message ** e) % n
    print(f"Encrypted message is {ct}")

    # performing decryption
    mes = (ct ** d) % n
    print(f"Decrypted message is {mes}")

# Testcase - 1
RSA(p=41, q=97, message=18)

# Testcase - 2
RSA(p=13, q=17, message=100)

# Testcase-3
RSA(p=31, q=37, message=5)