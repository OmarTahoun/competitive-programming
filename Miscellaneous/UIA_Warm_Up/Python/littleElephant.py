n = int(input())
costs = map(int, raw_input().split(' '))

cheapest = min(costs)
if costs.count(cheapest) == 1:
    print costs.index(cheapest)+1
else:
    print "Still Rozdil"

