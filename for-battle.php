<?php

$start = microtime(true);

$result = 0;
for ($i = 0; $i < 1000000001; $i++) {
    $result += $i;
}
echo $result . "\n";

$end = microtime(true);
echo $end - $start;