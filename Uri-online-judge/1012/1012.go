package main

import "fmt"

func main(){
	var a,b,c float64
	var triangle, cricule, trapezium, square, rectangle float64
	fmt.Scanf("%f %f %f",&a,&b,&c)
	triangle = (.50)*(a*c)
	cricule = 3.14159 * (c*c)
	trapezium = (.50*(a+b))* c
	square = b*b
	rectangle = a*b
	fmt.Printf("TRIANGULO: %.3f\n", triangle)
	fmt.Printf("CIRCULO: %.3f\n", cricule)
	fmt.Printf("TRAPEZIO: %.3f\n", trapezium)
	fmt.Printf("QUADRADO: %.3f\n", square)
	fmt.Printf("RETANGULO: %.3f\n", rectangle)
}

