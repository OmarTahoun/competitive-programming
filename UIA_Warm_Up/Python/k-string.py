import collections
k = int(input())
s = list(raw_input())

counts = collections.Counter(s)
newS = ""
if k ==1:
    print ''.join(s)
else:
    for letter in counts:
        if counts[letter] % k !=0:
            print '-1'
            exit()
        else:
            letter_count = counts[letter]/k
            newS += letter * letter_count

    print newS*k


