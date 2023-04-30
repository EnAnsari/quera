/*
	powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/181680/
*/

package main

import "fmt"

func main() {
	var w, s, i int
	fmt.Scan(&w, &s, &i)

	total_time := w + s
	overlap_time := i
	if i > w {
		overlap_time = w
	}
	if overlap_time > s {
		overlap_time = s
	}

	rest_time := 24 - total_time + overlap_time

	fmt.Println(rest_time)
}