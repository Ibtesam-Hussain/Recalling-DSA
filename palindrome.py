string = input("Enter a word to check its palindrome or not: ")

rev_str = ""

for i in string:
    #formula 
    rev_str = i + rev_str

if rev_str == string:
    print("its palindrome")
else:
    print("its not palindrome")
