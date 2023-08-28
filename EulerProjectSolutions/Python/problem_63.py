count = 0
for n in range(1, 10):
    for p in range(1, 22):
        if len(str(n ** p)) == p:
            count += 1
print(f"Count of n-digit positive integers exist which are also an nth power: {count}")
