from math import gcd

#function to perform RSA approch
def RSA(p: int, q: int, message: int):
    # calculating n
    n = p * q

   
    t = (p - 1) * (q - 1)

       for i in range(2, t):
        if gcd(i, t) == 1:
            e = i
            break
    
       j = 0
    while True:
        if (j * e) % t == 1:
            d = j
            break
        j += 1
    
    ct = (message ** e) % n
    print(f"Encrypted message is {ct}")

        mes = (ct ** d) % n
    print(f"Decrypted message is {mes}")

# Testcase - 1
RSA(p=41, q=97, message=18)

# Testcase - 2
RSA(p=13, q=17, message=100)

# Testcase-3
RSA(p=31, q=37, message=5)
