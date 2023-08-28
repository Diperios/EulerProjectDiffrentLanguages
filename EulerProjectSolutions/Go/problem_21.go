package main

import "fmt"

func sumOfDivisors(n int) int {
    sum := 1
    for i := 2; i*i <= n; i++ {
        if n%i == 0 {
            sum += i
            if i != n/i {
                sum += n / i
            }
        }
    }
    return sum
}

func main() {
    sum := 0
    for a := 1; a < 10000; a++ {
        b := sumOfDivisors(a)
        if b != a && sumOfDivisors(b) == a {
            sum += a
        }
    }
    fmt.Println("The sum of all amicable numbers under 10000 is:", sum)
}
