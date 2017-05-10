<?php

$array = [ 
	'ten' => 'ten',
	6 => 'six',
	"08" => 'eight',
	9 => 'nine',
	3.14159 => 'pi',
];

$arrayOrig = $array;

print_r($array);
$array = $arrayOrig;

sort($array);
print_r($array);

echo "OK --- " . PHP_EOL;
$array = $arrayOrig;
ksort($array, SORT_NUMERIC);
print_r($array);
