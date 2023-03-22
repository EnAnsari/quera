<?php

$file = fopen('input.txt', 'r');
$line = fgets($file);

$line = trim($line);
$line = strtolower($line);
$line = ucwords($line, ' ');

$line = str_replace(' ', '', $line);

$line = lcfirst($line);

echo $line;

// powered by Rahmat
// Email: Rahmat2022a@gmail.com
// Github: https://github.com/EnAnsari
// question link: https://quera.org/problemset/34937/