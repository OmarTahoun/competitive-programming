for i in range(5):
    row = raw_input()
    row = row.split(' ')
    if '1' in row:
        answer = abs(i-2) + abs(row.index('1')-2)
print(answer)
