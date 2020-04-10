import sys

def solution(A):
  """Your solution goes here."""
  A.sort(reverse= True)
  a, b = 0,0
  for x in A:
    if a<=b:
      a+=x
    else:
      b+=x
  return abs(a-b)


def main():
  """Read from stdin, solve the problem, write answer to stdout."""
  input = sys.stdin.readline().split()
  A = [int(x) for x in input[0].split(",")]
  sys.stdout.write(str(solution(A)))


if __name__ == "__main__":
  main()
