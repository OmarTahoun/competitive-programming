def teaching_assistant():
    S = raw_input().strip()
    mood = []
    for c in S:
        if mood and mood[-1] == c:  # Pair [CC|JJ].
            mood.pop()
        else:  # Remaining (CJ)+/(JC)+
            mood.append(c)
    # maximum points - (count of [CJ|JC]) * 5
    return len(S) / 2 * 10 - len(mood) / 2 * 5


for case in xrange(input()):
    print 'Case #%d: %s' % (case+1, teaching_assistant())