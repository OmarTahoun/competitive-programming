import random

s = "0"
first = random.randint(1,2)
if first == 1:
	s+=str(first)
	s+=str(random.randint(6,6))
else:
	first = first**4
	s += str(first)

second = random.randint(10,20)
second += 20-second
second = second*(second//2) + 7;
s += str(second)

b = "2"
total = 2
for r in range(2,8):
	if r==2 or r == 3:
		total += r
		b += str(r)

	if r==7:
		total += r
		b += str(r)
		break

s += b	
print(s)