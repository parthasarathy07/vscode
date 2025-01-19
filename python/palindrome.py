#palindrome
l=input("")
i=list(l)
j=i.reverse()
print(type(j))
p="".join(j)
if l==p:
 print ("it is an palindrome")
else:
 print("not an palindrome")


 
