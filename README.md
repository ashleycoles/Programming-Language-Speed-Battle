# Which programming language is the fastest?

## For loop battle

The first benchmark is a simple one. Count up to 1 billion, summing up a running tally as it goes.

| Language    | Options                  | Time                |
| ----------- | ------------------------ | ------------------- |
| Python 3    | Default CPython          | 93 seconds          |
| Ruby 3.1    |                          | 51.22 seconds       |
| PHP 7.4     |                          | 36.39 seconds       |
| PHP 5.6     |                          | 23.8 seconds        |
| PHP 8.1     |                          | 8.6 seconds         |
| JavaScript  | Node                     | 2.07 seconds        |
| PHP 8       | JIT Enabled              | 1.7 seconds         |
| C           | No compiler optimisation | 1.49 seconds        |
| Python 3    | PyPy                     | 1.07 seconds        |
| Golang      |                          | 0.5 seconds         |
| Java        |                          | 0.32 seconds        |
| C           | -O2 optimisation flag    | 0.000036 seconds    |
| Rust        | Level 2 optimisation     | 0.000000022 seconds |