from operator import itemgetter

chars = list(input())
d = [[c,chars.count(c)] for c in set(chars)]
d.sort(key=itemgetter(0))
d.sort(key=itemgetter(1), reverse=True)
for i in d[:3]:
    print("{0} {1}".format(i[0], i[1]))
