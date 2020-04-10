def boleh(mid, recipe_B, recipe_C, recipe_S):
	need_B = max((recipe_B*mid) - have_B, 0)
	need_S = max((recipe_S*mid) - have_S, 0)
	need_C = max((recipe_C*mid) - have_C, 0)

	total = need_B*price_B + need_S*price_S + need_C*price_C
	if rubles >= total:
		return True
	return False

recipe = input()

recipe_B = recipe.count("B")
recipe_S = recipe.count("S")
recipe_C = recipe.count("C")

have_B, have_S, have_C = map(int, input().split())
price_B, price_S, price_C = map(int, input().split())

rubles = int(input())

left, right = 0, 100000000000000
while(left < right):
	mid = left + (right-left+1)//2
	if boleh(mid, recipe_B, recipe_C, recipe_S):
		left = mid
	else:
		right = mid-1

print(left)
