package main

import "log"
import "time"

func main() {
    start := time.Now()

	result := 0

	for i := 0; i < 1000000001; i++ {
		result += i
	}

	time_spent := time.Since(start)
	log.Printf("%s", time_spent)
}

