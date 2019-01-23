n = int(input())
res = []
for i in range(n):
    line = raw_input().split(' ')
    b = int(line[0])
    p = float(line[1])

    t = 60.0 / p
    BPM = t * b
    min_ABPM = BPM - t
    max_ABPM = BPM + t
    
    BPM = "%.4f"%BPM
    min_ABPM = "%.4f"%min_ABPM
    max_ABPM = "%.4f"%max_ABPM

    res.append(str(min_ABPM)+" "+str(BPM)+" "+str(max_ABPM))

for line in res:
    print line
    

