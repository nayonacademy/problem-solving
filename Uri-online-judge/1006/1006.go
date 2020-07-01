package main
import "fmt"
func main(){
	var a, b, c, d float64
	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)
	d = ((a*2)+(b*3)+(c*5)) / (2+3+5)
	fmt.Printf("MEDIA = %.1f\n",d)
}