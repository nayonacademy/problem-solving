package main

import "fmt"

func main()  {
	var a,b,c int32
	fmt.Scan(&a)
	fmt.Scan(&b)
	c = a+b
	fmt.Printf("SOMA = %d\n", c)
}