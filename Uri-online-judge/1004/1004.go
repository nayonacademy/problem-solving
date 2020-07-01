package main

import "fmt"

func main(){
	var a,b,c int64
	fmt.Scan(&a)
	fmt.Scan(&b)
	c = a*b
	fmt.Printf("PROD = %d\n",c)
}