from collections import defaultdict

cubes = defaultdict(list)
n = 1
while True:
    cube = n ** 3
    key = ''.join(sorted(str(cube)))
    cubes[key].append(cube)
    if len(cubes[key]) == 5:
        print(f"The smallest cube for which exactly five permutations of its digits are cube: {min(cubes[key])}")
        break
    n += 1
