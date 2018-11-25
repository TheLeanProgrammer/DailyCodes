# Factorial Using Recursion

![cover](./cover.png)

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

![fact](./code.png)

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

## [C Implementation](./fact.c)

```c
// fact Function
int fact(int num) {
    if(num == 0)
        return 1;
    else
        return num * fact(num - 1);
}

//main Function
int main(void) {
    int answer;
    answer = fact(5);
    printf("Factorial is: %d", answer);
    return 0;
}
```