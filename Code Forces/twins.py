n = int(input())
coins = raw_input().split(' ')
coins = [int(x) for x in coins]
mine = []

while sum(mine) <=  sum(coins):
    mine.append(max(coins))
    coins.remove(max(coins))

print len(mine)





