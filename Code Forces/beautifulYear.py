n = int(input())
done = False
while (not done):
    n+=1
    word = str(n)
    if len(set(word)) == len(word):
        print n
        exit()
