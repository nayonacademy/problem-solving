package main

import "fmt"

func main() {
	var a, b int64
	var c, result float64
	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	// b = float64(b)
	result = float64(int16(b)) * c
	fmt.Printf("NUMBER = %d\n", a)
	fmt.Printf("SALARY = U$ %.2f\n", result)
}
