'''
* FIZZBUZZ
* author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com> 
* github: https://github.com/razdeep
'''

def fizzbuzz(n):
    if n%5 == 0 and n%3==0:
        print('FizzBuzz')
    elif(n%5 == 0):
        print('Buzz')
    elif(n%3 == 0):
        print('Fizz')
    else:
        print(n)

if __name__=='__main__':
    for i in range(0,101):
        fizzbuzz(i)