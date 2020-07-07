package main

import "fmt"

func main()  {
	var x int64
	fmt.Scan(&x)
	if x < 3600{
		min := x/60
		sec := x%60
		fmt.Printf("0:%d:%d\n",min, sec)
	}else{
		hour := x/3600
		min := (x%3600)/60
		sec := (x%3600)%60
		fmt.Printf("%d:%d:%d\n",hour, min, sec)
	}
}

//556
//
//0:9:16