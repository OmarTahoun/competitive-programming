import math
r, x,y, x1,y1 = map(int, input().split())
dist  = ((x1-x)**2 + (y1-y)**2)**(1/2)
ans = math.ceil(dist/(2*r))
print(ans)
  