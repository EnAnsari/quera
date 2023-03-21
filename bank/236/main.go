/*
	powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/126109/
*/

package main

func Hack(start string) []string {
	finalResult := []string{}

	tempResult := Retrieve(start)
	finalResult = append(finalResult, tempResult...)

	var ch = make(chan []string, len(tempResult))

	for _, v := range tempResult {
		go func (s string) {
			ch <- Hack(s)
		}(v)
	}

	for i := 0; i < len(tempResult); i++ {
		finalResult = append(finalResult, (<-ch)...)
	}

	return finalResult
}