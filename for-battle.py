from time import time

start = time()
result = 0

for i in range(0, 1000000001):
    result += i

print(result)
end = time()
print(end - start)