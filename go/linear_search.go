package main

import "fmt"

func main(){
	var n,item int
	fmt.Println("Enter number of elements")
	fmt.Scan(&n)
	ar := make([]int, n)
	for i:=0; i<n; i++{
		fmt.Println("Enter element number ",i+1)
		fmt.Scan(&ar[i])
	}
	fmt.Println("Enter number to search for")
	fmt.Scan(&item)
	var pos int =-1
	for i := 0; i<n; i++{
		if ar[i]==item{
			pos=i+1
			break
		}
	}
	if pos==-1 {
		fmt.Println("Not found")
	} else {
		fmt.Println(item," found at position ",pos)
	}
}