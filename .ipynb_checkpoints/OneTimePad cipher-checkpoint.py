"""
  OneTimePad cipher
                     [e=000, h=001, i=010, k=011, l=100, r=101, s=110, t=111]

                    h     e     i     l     h
     palintext:     001   000   010   100   001
        key:        111   101   110   101   111
        ----------------------------------------------
    CipherText:     110   101   100   001   110
                     s     r     l     h     s     
"""    
from random import randint
class OneTimePad:
    def encrypt(self, text):
        plain = [ord(i) for i in text]
        cipher = []
        key = []
        for i in plain:
            k = randint(1, 300)
            c = (i + k) * k
            cipher.append(c)
            key.append(k)
        return cipher, key
    
    def decrypt(self, cipher, key):
        plain = []
        for i in range(len(key)):
            p = int((cipher[i] - key[i] ** 2) / key[i])
            plain.append(chr(p))

        result = ''.join([i for i in plain])   
        return result
    

c, k = OneTimePad().encrypt('ali')
print(c)
print(k)

print(OneTimePad().decrypt(c, k))