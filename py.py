'''name = input ("what is your name?") # ''' is for multi line strings 
print("Hello " + name)#this is known as concatination (string + string)'''
#-----------------------------------------------------------------------------
'''oldage = int(input("enter your old age"))#type conversion
newage=int(oldage)+2#newage = oldage + 2 #this is not possible b'coz it sees oldage as string "20" therefore
print(newage)'''
#-----------------------------------------------------------------------------
'''first = input ("enter the first number")
second = input ("enter the second number")
sum = first + second     #answer would be 23 because of concatination #sum = int(first) + int(second)
print(sum)'''
#-----------------------------------------------------------------------------
name = "rishikesh yadav" #.methods jo bhi . ke baad lgta h kaam ka nhi hai
print(name.upper())#upper() for uppercase characters and lower() for lowercase 
#-----------------------------------------------------------------------------
name = "rishikesh yadav"
print(name.find("yadav"))#if it finds then return the position otherwise -1
#-----------------------------------------------------------------------------
'''name = "rishikesh yadav"
print(name.replace("rishikesh ","iron man "))#used to replace strings,characters
print(name)#but still original one remains the same''' # coz strings are immutable
#-----------------------------------------------------------------------------
'''name = "rishikesh yadav"
print ("rishikes" in name)#used to find characters and strings in string using in 
print ('y' in name)'''
#-----------------------------------------------------------------------------
#booleans
'''print(5//2) # //only gives left of point values or integer values
print(5**2) # 5 power 2 
print (3>2) == != >= <=   gives True
print(3!=2) gives True & we use or not || here ,  and not &&   
print(not 3>2)  gives false coz of not operator'''

#-----------------------------------------------------------------------------
'''age = 13

if age >= 18: # : means a paragraph is going to start
    print("you are an adult")#this is known as indentation
    print("you can vote")
elif age < 18 and age > 2: #and means &&
    print("you are in school")
    
else:
    print("you are a child")
    
print("thankyou") # this line will print in any case''' 

*******message if_true if condition else message if_false# if condition is true then print message if_true otherwise print message if false

#-----------------------------------------------------------------------------
#building a calculator
'''first = input("enter the first number : ")
operator = input ("enter the oprator (+ - / *) : ")
second = input ("enter the second number :")
first = int(first)
second = int(second)

if operator == "+":
    print(first + second)
elif operator == "-":
    print(first - second)
elif operator == "*":
    print(first * second)
elif operator == "/":
    print(first / second)
else:
    print("invalid operation")'''
#-----------------------------------------------------------------------------

#range(5) means 0,1,2,3,4 just like arrays
numbers = range(5) #(0,10,2)#2 means stepover , if instead of 2 -1 is there means start from last
print(numbers)

#creating list from range
for i in range(2):
    print(list(range(10))) # answer is [0,1,2,3,4,5,6,7,8,9]

#-----------------------------------------------------------------------------
#while loop 
i=1
while i<=5:  ''' condition '''
    print(i * '*')#When you multiply a string by an integer, it repeats the string multiple times
    i+=1    # 'a' * 3 gives aaa 
'''in one case there inside while loop u can add else statement without if and it will execute only the condition is false and loop will break'''
#------------------------------------------------------------------------------------
'''for i in range(5): #for _ in range(5):
    print(i)'''       # print(_) #same answer if i is there
  for term in 'zero to mastery' #term is an iterable used to hover over the set,list,dictionary,string,tuple
    print(item)#it will print each letter in different line
#------------------------------------------------------------------------------------  
#list concept
'''marks = [ 95 , 98 , 97 , "maths"] #list
print(marks[2])#printing ,, if u write just marks then it will print all
print(marks[-1])#using - means printing from last -1 means printing maths   
print(marks[0:2])# starts with 0 and ends at 1  

for score in marks:
    print(score)#it will print all the elements of marks'''
#------------------------------------------------------------------------------------ 
#adding in list    lists are mutable means changes can be made in list and it will change the original list even if you change the 
#list values in a function which do not return anything still it will be changed outside of the list also
'''marks = [95 , 98 , 97]
marks.append(99)  #  attaching 99 after 97
print(marks.index(97)) #it will print 2
print(max(marks))#it will print the maximum number  of the list marks

marks.insert(0,100)  #to which position we want to add at 0 position we want to add 100 , it does'nt remove anything
marks.extend([500]) # adds 500 in last

marks.pop(2) #it removes that from the list where 2 is an index
marks.remove(3)#it removes the 3 element from the list that is 97
marks.reverse()#u already know also reverse like marks[::-1]


print(99 in marks) #checking if 99 exists in marks prints true
print(basket.count(98)) #it will give 1 as 98 is present only 1 time in the list

marks.sort() #it will sort the list in ascending order also works for alphabets
marks.sorted() #it does the same thing like above but only once the original list does'nt change

print(list(range(1,100))) #prints a list of 1 to 99
new_sentence = ' '.join(['hi','my','name','is'])#it will add a gap after each word coz of ' '

print(len(marks)) #used to print length of list
marks.clear() #used to clear the list
print(marks)  #after clearing it'll print []'''

#list unpacking

a,b,c,*another,e = [1,2,3,4,5,6,7,8,9]
print(a) #a = 1 , b=2 , c=3 , another = [4,5,6,7,8] and e =9 if e not there then 9 will be included in another
# another will create a tuple which cannot be changed


# list comprehension
my_list = [1,2,3,4]

ur_list = [item for item in "my_list"]  # 1st item is used to store the characters & 2nd to iterate over remember both wll be same
# ur_list = [item * 2 for item in range(0,100)] #ucan change the list my changing 1st item only ansis 0to100 multiplied by 2
print(ur_list) # ['m', 'y', '_', 'l', 'i', 's', 't']


list_3 = [item  for item in range(0,100) if item % 2 == 0] # for ke baad if chk hoga agr true h to hi 1st item me jayega

print(list_3)  # for set comprehension(store only unique values) use {} instead of []

# dictionary comprehension

simple_dict={
  'a' : 1 ,
  'b' : 2
}

my_dict = {key:value**2 for key,value in simple_dict.items()} # samajh gaye hoge

print(my_dict)  

#another method

my_dict = {num:num*2 for num in [1,2,3]}

print(my_dict)


#------------------------------------------------------------------------------------  
#using break and continue
'''
students = ["ram" , "shyam" , "kishan" , "radha" , "radhika" ]
for student in students:
    if student == "radha":
        break # means exit of loop and continue means niche ki line execute nahi hogi
    print(student) '''
#------------------------------------------------------------------------------------ 

#tuple(no operations like delete, or format in between like list) or immutable list
marks = (95 ,98 , 97 , 97 , 97 )
# marks = 95 , 98 , 97 # this is also a tuple we use() just to look better
# marks[0] = 99 #we cannot change tuples so , this is a wrong line
print(marks.count(97))#count how many times 97 is there that is 3
print(marks.index(98))#tells index
print(len(marks)) #5

#------------------------------------------------------------------------------------ 
# sets{} #learn more from lecture number 326
marks = { 95 ,98 , 97 , 97 , 97 }
print (marks) #97 will be printed only once as unique value stores only
marks.add(100)#it adds 100 in last
'''list=[1,2,3,4,5,5]
print(set(list))#it will convert the list into set with only one 5 in it and vice versa'''



#------------------------------------------------------------------------------------ 

#dictionary

marks = {"english " : 95, "chemistry" : 98} # in this we can add list , bool , strings , etc. dict has no order
print(marks["chemistry"])#prints marks of chemistry which is 98
marks["physics"] = 97 # added physics marks also to the dictionary
marks["physics"]=99 #physics marks changes to 99 ********************************
print(marks.get("maths",100))#if maths is not there add default maths = 100 is maths is there then print the marks of maths
#in the original part maths marks will not be added in the dictionary
print("chemistry" in marks)#true
print(marks['chemistry']) # printing chemistry marks
print("chemistry" in marks.keys()) #true ; keys are the left side of the values  so chemistry is keys and 98 is value
print("98" in marks.values()) #prints true
prints(marks.clear())
print(marks.pop("chemistry"))#removes chemistry from dictionary
print(marks.update({"chemistry":55}))#chemisty marks is now 55

#while iterating over dictionary in loops .items(){both subject and marks} , .values(){only marks} , .keys(){only subjects}

#------------------------------------------------------------------------------------ 

import math#this is how you call a function
print(dir(math))#prints all the maths functions
from math import sqrt#import sqrt functins from math only
from math import * #saare functins aa jayenge

#------------------------------------------------------------------------------------

#EXTRAAS

(), == , ** , * / , + -  #order in which calculation takes place
print(type(6))#it prints the type of 6 that is int
print(2 ** 3)#it means 2 to the power 3 the answer would be 8
print(8 // 3) # quotient will be in integer form the answer is 2 not 2.66666
print(round(3.9))#it round it to 4
print(abs(-20))#20 is the answer, these 2 are math functions upper and this one
# and means &&   or means || in python
print("a" > "b") #print false coz of ascii values
print(not(1==1)) #print false # == check the values but
a = 5
print(float(a)) #used to convert int into float into complex number

txt = "Hello World"
x = txt[2:5] #used to access from index 2 to index 4

''' **************************************is used to check the memory location*********************************************************
print(True is True)#true
print('1' is '1')#true as similar strings has similar memory location
print([1,2,3] is [1,2,3])#first and second list has  different memory locations therefore ans is false
print(10 is 10)'''

# ord() function converts a character into its ASCII notation and chr() converts the ASCII to character



a , b , c = 1 , 2 , 3 # tell me?

weather = "it's \"kind of\" sunny" #the next letter after \ is considered as a string
print(weather)# it's "kind of " sunny    is the output

name = "rishikesh" #topic - formatted strings
age = 20
print("hi " + name +  ". You are " + str(age) + " years old")#instead of writing like this 
print(f"hi {name}. You are {age} years old")# u can write like this gives the same result

selfish = "me me me"
print(selfish[any number])# yes this is possible in python like arrays but u cannot change it

selfish = "01234567"
print(len(selfish)) #8 starts counting from 1

# [start : stop : stepover] stepover means skipping the terms
print(selfish[0:8:2]) # answer = 0246 # 2 means skipping 1 term
#********************** 0 included , 8 excluded, 2 excluded******************
print(selfish[::-1]) #print the whole number from backwards 76543210

#code important concept also called list slicing
''' amazon_cart = ['notebook' , 'sunglasses' , 'toys' , 'grapes']
new_cart = amazon_cart
new_cart='gum'
print(new_cart)
print(amazon_cart)'''  # gum and ['notebook' , 'sunglasses' , 'toys' , 'grapes']

# Matrix
matrix = [[1,5,1],[0,1,0],[1,0,1]] # this is a list
print[matrix[0][1]]  # 5 will get printed

#enumerate(some values to iterate over)  it just like range but helps in finding index of some value let us see

for i , char in enumerate((1,2,3)) :# it may be a list or a  tuple  try yourself with helllooo instead of (1,2,3)
    print(i,char) # 0,1   1,2  2,3   where i is index and char is number

#end
''' When you set end = ' ', it means that instead of a newline character, a space character will be added at the end of the printed text. 
Here's an example to illustrate this: '''
print("Hello", end=' ')#you can either use space or nothing in ""
print("World")  #output Hello World 

#-----------------------------------------------------------------------------------
#FUNCTIONS
def say_hello(name,emoji):# this is how you define a funtion , passing arguments in the funtion 
  print(f'hellloooo {name} {emoji}')

say_hello('rishikesh', ':)😍')#define the function first and then call it coz python is an interpreter,this is how you pass arguments
say_hello(name = 'boss' , emoji = '😍')#this is called positional arguments ek hi baat h yaar

#default values
def say_hello(name = 'bad boy',emoji = '😰'):#these are the default vales
    print(f'hellloooo {name} {emoji}')

say_hello()#if u give nothin then it will take the default values bad boy and 😰 will be printed
say_hello('boss' ,'😍')#in this f(x) call boss and 😍 will be printed


def super_func(*args):# * it will create a tuple as seen earlier, arg can take only 1 value, it is used when the size if unknown
  print(args) # *args will print the value whereas args will print a tuple
  return sum(args)

super_func(1,2,3,4,5)


# RULE        (params, *args , default params , **kwargs)
def super_func(*args , **kwargs):# ** is used for dictionary to send the values
  print(args)
  print(kwargs) # will print the dictionary 
  total = 0
  for items in kwargs.values(): # adding the dictionary values
    total += items
  
  return sum(args) + total # sum is a functions which add all the elements of args
 
print(super_func(1,2,3,4,5, num1 = 5 , num2 = 10))

#nonlocal keyword is used to access the parent function values, Eg- if there is func2 inside func1 then then func2 will use nonlocal keyword to use func1 elements
#global keyword
total = 5 // global number can be used everywhere
def func():
  global total // this global keyword is used to take the value from the outside total = 5
  total += 1
  return total
  
print(func())  

#------------------------------------------------------------------------------------

# map (function , values(iterables to hover over))
my_list = [1,2,3]
def multiply_by2(item): # the map func would iterate over all the items 
  return item * 2    #map loops over the iterables 1,2,3

print(list(map(multiply_by2,my_list))) #map is gonna call the func send the values as items and the result will be converted into a list
print(my_list)  # *********map funct dont change the original list

# filter ( return only those values which are true , remove the false values)
my_list = [1,2,3]
def only_odd(item):
  return item % 2 != 0  # if do the same thing in map it will return true false true

print(list(filter(multiply_by2,my_list))) # [1,3] is the answer

# zip  (merge all the first element together , second together , third together , etc) # can pass any amount of iterables(list,tuple)
my_list = [1,2,3]
your_list = [10,20,30]
their_list = [100,200,300]

print(list(zip(my_list , your_list, their_list))) # ((1,10,100),(2,20,200),(3,30,300))

# reduce 

from functools import reduce(function , parameters(iterables) , initial value)

my_list = [1,2,3]

def super_func(acc,item): #initial value of acc=0 & item=1 then acc+item=1,,now newvalue of acc=1 and item=2 and return 3
  print(acc,item)     # new value of acc = 3 and item is 3 , return 6 then new value of acc is 6 then loop ends
  return acc + item

print(reduce(super_func,my_list,0)) # 

#------------------------------------------------------------------------------------
try:
   x = int(input('input an integer'))
   print(x)
except ValueError:
   print('value not an integer' + name)

else:
   print('nothing went wrong') # if try statement is executed successfully

finally:
   print('this will print in every case')      
#------------------------------------------------------------------------------------

#exercises 
picture = [
[0,0,0,1,0,0,0],
[0,0,1,1,1,0,0],
[0,1,1,1,1,1,0],
[1,1,1,1,1,1,1],
[0,0,0,1,0,0,0],
[0,0,0,1,0,0,0]
]
for row in picture:
    for columns in row:
        if coluumns == 1:
            print("*" , end=" ")
        else:
            print(" ", end= " ")
    print("")      #print has an inbuilt function of printing a newline

  #FIND DUPLICATES

somelist = ['a','b','c','b','d','m','n','n','a','a']
duplicates = []#creating an empty list to store duplicates
for value in somelist:
  if somelist.count(value) > 1:
    if value not in duplicates:#it matches all the values in dup. if there then do not add in the duplicates
      duplicates.append(value)

print(duplicates)#it will print all the duplicates list

#function lappu sa sawal
def sum(num1 , num2):
  def another_function(num1,num2):
    return (num1 + num2)#retun of another_function but still some retun is not there #after cmng from sum will return 30
  return another_function(num1, num2) #return of sum which says go to another_function one more thime
  return 5 #these  return and print will not work coz code return the statement above
  print("hello")

total = sum(10,20)
print(total)

# wscubetech questions  (extraas)
txt = " Hello World "
x = txt.strip()   #used to remove any whitespaces in the beginning and in the end

  
  
    


