if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    max_val = max(arr)
    for i in range(len(arr)-1, -1, -1):
        if arr[i] == max_val:
            arr.remove(arr[i])
    print(max(arr))

