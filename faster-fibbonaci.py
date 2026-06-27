from functools import lru_cache
from timeit import default_timer as timer
from datetime import timedelta


start_time = timer()

@lru_cache
def fasterFib(num):
    if(num <= 1):
        return num
    
    return fasterFib(num - 1) + fasterFib(num - 2)

print("Faster Fibbonaci : ")
fibFast = [fasterFib(i) for i in range(0, 40)]
print(fibFast)

end_time = timer()

print('='*50)
print(timedelta(seconds=end_time-start_time))