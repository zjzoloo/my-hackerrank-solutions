if __name__ == '__main__':
    lst = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        lst.append([name, score])

    ans = sorted(list(set([i for name, i in lst])))[1]
    print('\n'.join([a for a,b in sorted(lst) if b == ans]))    

