import sys

def solution(A):
  """Your solution goes here."""
  low = 10001
  total = 1
  for x in A:
    if x > low:
      total +=1
    else:
      low = x
  return total


def main():
  """Read from stdin, solve the problem, write answer to stdout."""
  input = sys.stdin.readline().split()
  A = [int(x) for x in input[0].split(",")]
  sys.stdout.write(str(solution(A)))


if __name__ == "__main__":
  main()
