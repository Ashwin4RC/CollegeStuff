package main

import "fmt" 

func main(){
	var a,b,res int
	fmt.Println("Enter two numbers:")
	fmt.Scan(&a,&b)
	res = a + b
	fmt.Println("Sum is ",res)
}