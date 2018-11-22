# Factorial Using Recursion

![strrev](./code.png)

## [Javascript Implementation](./fact.js)

```js
function dailyCode(n) {
    if (n<=1) {
        return 1;
    } else {
        return n*dailyCode(n-1);
    }
}

// Guess the output!
console.log(dailyCode(3)); 
console.log(dailyCode(4)); 
```
## [Python Implementation](./fact.py)

```python
def fact(n):
    s=1
    for i in range(1,n+1):
        s=s*i
    return s

# Guess the output!
print(fact(3))
print(fact(4))
```