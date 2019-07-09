n = int(input())
nums = list(map(int, input().split()))

small = nums.index(min(nums))
large = nums.index(max(nums))

print(max([small-0, n-1-small, large-0, n-1-large]))
