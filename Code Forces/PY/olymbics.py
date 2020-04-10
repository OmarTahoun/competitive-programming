import math
eps = 1e-9

def ok(L, a, b):
	W = b/a * L
	R =  math.sqrt(0.5*L*0.5*L + 0.5*W*0.5*W)
	angle = 2.0 * math.atan(0.5*W/0.5/L)*180/math.pi
	arc = angle / 360 * math.pi * (2.0*R)
	if (arc*2 + L*2) > 400:
		return True
	return False


a, b = map(int, input().split())
left, right = 0, 400
L=0
while(math.fabs(left-right) > eps):
	L = (left+right)/2
	if ok(L, a, b):
		right = L
	else:
		left = L

W = b/a * L
print("%.10f %.10f" %(L,W))


