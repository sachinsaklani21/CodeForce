import sys
n=int(sys.stdin.readline())
for i in range(n):
    test_word=sys.stdin.readline().strip()
    if len(test_word)>10:
        print(test_word[0]+str(len(test_word)-2)+test_word[len(test_word)-1])
    else:
        print(test_word)    