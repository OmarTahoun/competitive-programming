word = raw_input()
white=lower=upper=sympol = 0.0


for i in range(len(word)):
    letter= word[i]
    if letter == "_":white+=1.0
    if letter.isalpha():
        if letter.isupper(): upper+=1.0
        else: lower+=1.0

sympol = 1-(white+lower+upper)/len(word)
print white/len(word)
print lower/len(word)
print upper/len(word)
print sympol

