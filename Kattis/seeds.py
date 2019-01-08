p = float(input())
n = int(input())
area = 0.0
for i in range(n):
    l , w = raw_input().split(' ')
    area += float(l) * float(w)

print "%.7f" %(p*area)




