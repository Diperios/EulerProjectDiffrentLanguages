function isPrime(n) {
    for (let i = 2; i * i <= n; i++) {
      if (n % i === 0) return false;
    }
    return true;
  }
  
  let largest = 0;
  for (let n = 123456789; n <= 987654321; n++) {
    const str = n.toString().split("").sort().join("");
    if (str === "123456789" && isPrime(n)) {
      largest = Math.max(largest, n);
    }
  }
  console.log("Largest pandigital prime:", largest);
  