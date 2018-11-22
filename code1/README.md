# String Reversal

![strrev](./code.png)

## [Code](./strRev.js)

```js
function dailyCode (str) {
    return str
      .split('')
      .reverse()
      .join('');
}

// Guess the output!
console.log(dailyCode('Hello')); 
console.log(dailyCode('Greetings')); 
```

## [Python Implementation](./strRev.py)

```python
def strRev(a):
    return a[::-1]

stringList=['Hello','Greetings']
stringRevList=[strRev(i) for i in stringList]

# Guess the output!
for i in stringRevList:
    print(i)
```