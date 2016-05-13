package main

var (
    primes []uint64
    limit uint64
    n int
)

func int() {
    primes = make([]unit64, 2, 1024)
    primes[0] = 2
    primes[1] = 3
    n = 1
    limit = uint64(9)
}

func isPrime(uint64) bool {
    for i := 0; i < n; i++ {
        if v % primes[i] == 0 {
            return false
        }
    }
    return true
}

