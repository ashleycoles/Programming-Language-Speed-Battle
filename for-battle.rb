require 'benchmark'

result = 0

time = Benchmark.measure {
    for i in 0..1000000001
        result += i
    end
    
}
puts time.real
