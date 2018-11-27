# String Reversal

![cover](./cover.png)

## [JavaScript Implementation](./strRev.js)

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

![JS](./code.png)

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

## [C Implementation](./strRev.c)

```c
// strRev Function
void strRev( char str[MAX] ) {
    int i;
    int j;
    char temp;

    for(i=0 ; str[i]!='\0' ; i++);

    j=0;
    i = i-1;

    while(j<i) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    printf("The reversed string is %s", str);
}

// main Function
int main(void) {
    char string[MAX];

    printf("Enter the string: ");
    gets(string);
    strRev(string);
    return 0;
}
```