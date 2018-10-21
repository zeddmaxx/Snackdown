from collections import Counter

def fun1(x):
    count=0
    for i,j in x.items():
        m = val(i)
        count+=m
        count+=(m/2)*(j-1)
        

    return int(count)

def val(word):
    s = 2
    c=0
    if(word[0]=='d'or word[0]=='f'):
        c=0
    else:
        c=1
    for i in range(len(word)):
        if(i==0):
            continue
        if(word[i] == 'd'or word[i] == 'f'):
            if(c==0):
                s+=4
            else:
                s+=2
                c=0
        elif(word[i] == 'j' or word[i] == 'k'):
            if(c==0):
                s+=2
                c=1
            else:
                s+=4
    return int(s)



t = int(input())
while(t > 0):
	words = []
	n = int(input())
	while(n>0):
		word = input()
		words.append(word)
		n=n-1
	x = dict(Counter(words))
	print(fun1(x))
	t=t-1

