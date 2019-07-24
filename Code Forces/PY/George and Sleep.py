curr = input()
slept = input()

hc, mc = int(curr.split(":")[0]), int(curr.split(":")[1])
hs, ms = int(slept.split(":")[0]), int(slept.split(":")[1])

if hc == 0: hc = 24
if hs == 0: hs = 24

h = hc-hs
m = mc-ms

if m<0:
	m+=60
	h-=1

if h<0:h+=24

print('{:02d}'.format(h)+":"+'{:02d}'.format(m))
