s=input()
len(s)
def permutation(s):
    permutation_list=[]
    if len(s)==1:
        return [s]
    else:
        first=s[0]
        rest=permutation(s[1:])
        for word in rest:
            for i in range(len(word)+1):
                newword=word[0:i]+first+word[i:]
                permutation_list.append(newword)
        return(set(permutation_list))
        
print(permutation(s))



