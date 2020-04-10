from datetime import date
line = map(int, raw_input().split())
days = ['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']
print days[date(2009, line[1], line[0]).weekday()]

