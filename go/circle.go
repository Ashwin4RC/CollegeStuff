package main

import "fmt"

func main(){
	pi := 3.14
	var r float64
	fmt.Println("Enter the radius")
	fmt.Scan(&r)
	area := pi * r * r
	peri := 2 * pi * r
	fmt.Println("The area is ",area)
	fmt.Println("The perimeter is ",peri)
}