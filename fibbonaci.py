
from timeit import default_timer as timer
from datetime import timedelta


start_time = timer()
def fibRec(num):
    #base case
    if (num <= 1):
        return num
    else:
        return fibRec(num-1) + fibRec(num-2)


print("fibbonaci sequence: ")
fibList = [fibRec(i) for i in range(0,100)]
print(fibList)
    
end_time = timer()

print('='*50)
print(timedelta(seconds=end_time-start_time))