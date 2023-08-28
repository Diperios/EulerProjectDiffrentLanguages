package main

import (
	"fmt"
	"math"
)

func main() {
	sum := 0
	for i := 10; i < 354294; i++ {
		digitSum := 0
		n := i
		for n > 0 {
			digit := n % 10
			digitSum += int(math.Pow(float64(digit), 5))
			n /= 10
		}
		if digitSum == i {
			sum += i
		}
	}
	fmt.Println("The sum of all the numbers that can be written as the sum of fifth powers of their digits is:", sum)
}
