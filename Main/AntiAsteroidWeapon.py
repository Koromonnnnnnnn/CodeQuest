import math

cases = int(input().rstrip())


def distance(x, y):
    return math.sqrt(x ** 2 + y ** 2)


for _ in range(cases):
    d = {}
    subCases = int(input().rstrip())
    for _ in range(subCases):
        line = input().strip()

        first, second = line.split(" ")

        dist = distance(int(first), int(second))

        if d.get(dist) != None:
            d[dist].append((first, second))
        else:
            d[dist] = [(first, second)]

    keys = list(d.keys())
    keys.sort()
    for dist in keys:
        for point in d[dist]:
            print(point[0], point[1])
