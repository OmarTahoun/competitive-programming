colors = "ROYGBIV"
n = int(input())
res = colors * (n//7)
remainders = ["", "G", "GB", "YGB", "YGBI", "OYGBI", "OYGBIV"]
res += remainders[n%7]
print(res)