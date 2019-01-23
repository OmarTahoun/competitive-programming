import math
values = map(int, raw_input().split())
h = values[0]
v = values[1]
v = math.radians(v)
print int(math.ceil( h / math.sin(v)))





