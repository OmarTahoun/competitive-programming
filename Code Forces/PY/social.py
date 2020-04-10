n, k = map(int, input().split())
messages = list(map(int, input().split()))

displayed = []
for m in messages:
	if m in displayed:
		continue
	else:
		if len(displayed)<k:
			displayed = [m] + displayed
		else:
			displayed = [m] + displayed[:-1]

print(len(displayed))
print(*displayed, sep = " ")
