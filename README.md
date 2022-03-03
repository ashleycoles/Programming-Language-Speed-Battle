# Which programming language is the fastest?

## For loop battle

The first benchmark is a simple one. Count up to 1 billion, summing up a running tally as it goes.

| Language    | Type        | Options                  | Time                |
| ----------- | ----------- | ------------------------ | ------------------- |
| Python 3    | Interpreted | Default CPython          | 93 seconds          |
| Ruby 3.1    | Interpreted |                         | 51.22 seconds       |
| PHP 7.4     | Interpreted |                         | 36.39 seconds       |
| PHP 5.6     | Interpreted |                         | 23.8 seconds        |
| PHP 8.1     | Interpreted |                        | 8.6 seconds         |
| JavaScript  | Interpreted | Node                     | 2.07 seconds        |
| PHP 8       | Interpreted | JIT Enabled              | 1.7 seconds         |
| C           | Compiled    | No compiler optimisation | 1.49 seconds        |
| Python 3    | Interpreted | PyPy                     | 1.07 seconds        |
| Golang      | Compiled    |                         | 0.5 seconds         |
| Java        | Compiled    |                         | 0.32 seconds        |
| C           | Compiled    | -O2 optimisation flag    | 0.000036 seconds    |
| Rust        | Compiled    | Level 2 optimisation     | 0.000000022 seconds |