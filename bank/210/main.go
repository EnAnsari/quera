/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/113613/
*/

package main

func Solution(f func(uint8) uint8, inp uint32) uint32 {
	var result uint32
	done := make(chan int, 4)
	for i := 0; i < 4; i++ {
		go func(slice int) {
			result |= uint32(f(uint8(inp>>(8*slice)&0xFF))) << (8 * slice)
			done <- 1
		}(i)
	}
	for i := 0; i < 4; i++ {
		<-done
	}
	return result
}