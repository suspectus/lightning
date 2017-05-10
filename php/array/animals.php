<?php

$animals = [
	'elephant',
	'hippopotamus',
	'wolf',
	'tiger',
	'orangutan',
	'emu',
];

function view($array, $info) 
{
	$border = str_pad("", strlen($info) + 3, "=", STR_PAD_LEFT);
	echo PHP_EOL . $border . PHP_EOL;
	echo ' ' . $info . PHP_EOL;
	echo $border . PHP_EOL;
	print_r($array);
}
