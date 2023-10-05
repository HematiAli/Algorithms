"""
    rotate
            rotate("hello", 2) return "llohe"
            rotate("hello", 5) return "hello"
            rotate("hello", 6) return "elloh"
            rotate("hello", 7) return "llohe"
            
            hellohello
"""
def rotate(s, k):
    double_s = s + s
    if k <= len(s):
        return double_s[k: k + len(s)]
    else:
        return double_s[k - len(s): k]
    
