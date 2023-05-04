<?php


function sayHello(array $words, int $reverseIndex): void
{
    $reversedWord = strrev($words[$reverseIndex]);
    $result = implode(' ', $words);
    $result = str_replace($words[$reverseIndex], $reversedWord, $result);
    echo $result . "\n";
}

// powered by Rahmat
// Email: Rahmat2022a@gmail.com
// Github: https://github.com/EnAnsari
// question link: https://quera.org/problemset/121728/