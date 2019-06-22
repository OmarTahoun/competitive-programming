n, k, l, c, d, p, nl, np = map(int, input().split())

total_drink = (k*l)/nl
total_lime = c*d
total_salt = p/np

print(int(min(total_drink, total_salt, total_lime) // n))