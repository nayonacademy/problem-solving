package main

import (
	"fmt"
	"math"
)

func main(){
	var a,b,c int64
	var mar float64
	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	absvalue := math.Abs(float64(int64(a))-float64(int64(b)))
	mar = (float64(int64(a))+float64(int64(b))+absvalue)/2
	maior :=(mar+float64(int64(c))+math.Abs(mar-float64(int64(c))))/2;
	newv := int64(maior)
	fmt.Printf("%d eh o maior\n", newv)
}
