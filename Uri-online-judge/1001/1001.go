package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a)
	fmt.Scan(&b)
	c := a + b
	fmt.Printf("X = %d\n", c)
}
