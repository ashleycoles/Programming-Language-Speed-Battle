fn main() {
    use std::time::Instant;
    let start = Instant::now();

    let mut result: u128 = 0;

    for i in 0..1000000001 {
        result += i;
    }

    let time_spent = start.elapsed();
    println!("{}", result);
    println!("{:.2?}", time_spent);
}