/* ===== The Lean Programmer ===== */
/* ========= Daily Codes ========= */

function dailyCode (str) {
    return str
      .split('')
      .reverse()
      .join('');
}

// Guess the output!
console.log(dailyCode('Hello')); 
console.log(dailyCode('Greetings')); 