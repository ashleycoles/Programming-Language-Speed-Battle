const { performance } = require('perf_hooks');

let start = performance.now()

let result = 0

for (i = 0; i < 1000000001; i++) {
    result += i
}

console.log(result)

let end = performance.now()
console.log((end - start) / 1000)