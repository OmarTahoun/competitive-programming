word = list(raw_input())
t = word.count('T') 
c = word.count('C')
g = word.count('G')

score = t**2 + c**2 + g**2
if t>0 and c>0 and g>0:
    score += min(t,c,g) * 7

print score
