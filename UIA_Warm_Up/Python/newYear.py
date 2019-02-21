cards = list(raw_input())
count = 0
for card in cards:
    if card.isdigit():
        if int(card) % 2 != 0:
            count +=1
    elif card in ['a', 'i', 'e', 'o', 'u']:
        count +=1

print count 
