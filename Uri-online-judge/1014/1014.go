package main

import "fmt"

func main(){
	var distance int64
	var fuel, result float64
	fmt.Scan(&distance)
	fmt.Scan(&fuel)
	result = float64(int64(distance)) / fuel
	fmt.Printf("%.3f km/l\n", result)
}
