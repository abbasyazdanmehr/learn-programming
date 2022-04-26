

def can_be_triangle(first, second, third):
    if first + second > third:
        if first + third > second:
            if second + third > first:
                return True
    return False



