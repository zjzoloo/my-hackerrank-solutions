for _ in range(int(input())):
    try:
        a,b = map(int, input().split())
        print(a//b)
    except ZeroDivisionError as e:
        print("Error Code: integer division or modulo by zero")
    except Exception as e:
        print("Error Code: {}".format(e))
