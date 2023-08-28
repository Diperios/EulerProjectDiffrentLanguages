package main

import (
	"fmt"
	"math/big"
)

func main() {
	a, b := big.NewInt(1), big.NewInt(1)
	index := 2

	for {
		index++
		a.Add(a, b)
		a, b = b, a

		if len(a.String()) >= 1000 {
			break
		}
	}

	fmt.Println("The index of the first term in the Fibonacci sequence to contain 1000 digits is:", index)
}
