package main

import "fmt"

func main() {
    sum := 1
    for i, step := 3; i <= 1001; i += 2 {
        for j := 0; j < 4; j++ {
            sum += i * i - step * j
        }
    }
    fmt.Println("The sum of the numbers on the diagonals in a 1001 by 1001 spiral is:", sum)
}
