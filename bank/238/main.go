/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/106381/
*/

package main

import (
	"fmt"
	"strings"
)

func main() {

	var input string

	fmt.Scanln(&input)

	input = strings.ToLower(input)

	bale := strings.Index(input, "bale")
	kheir := strings.Index(input, "kheir")
	areh := strings.Index(input, "areh")
	na := strings.Index(input, "na")

	cBale := strings.Count(input, "bale")
	cKheir := strings.Count(input, "kheir")
	cAreh := strings.Count(input, "areh")
	cNa := strings.Count(input, "na")

	if cBale != cKheir || cAreh != cNa || kheir < bale || na < areh {
		fmt.Println("NO")
		return
	}

	if bale > areh && kheir > na && areh < na && na > bale {
		fmt.Println("NO")
		return

	}

	if areh > bale && na > kheir && bale < kheir {
		fmt.Println("NO")
		return
	}


	fmt.Println("YES")

}