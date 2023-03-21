/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/126106/
*/

package main

import (
	"fmt"
)

func HelloCodeCup(n int) string {
	return fmt.Sprintf("Hello CodeCup %v", n);
}

func main() {
	str := HelloCodeCup(6)
	fmt.Println(str)
}