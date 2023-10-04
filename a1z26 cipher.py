"""
    a1z26
          ali =>[5, 16, 13]
"""

key = 92
def encode(plain):
    return [ord(elm) - 92 for elm in plain]



def decode(encode):
    return "".join(chr(elm + 92) for elm in encode)


