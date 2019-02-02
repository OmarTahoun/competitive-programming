n = float(input())
bats = map(float, raw_input().split())


score = 0.0
for bat in bats:
    if bat >= 0 :
        score+=bat

avg = score / (n - bats.count(-1))
print "%.15f"%avg

