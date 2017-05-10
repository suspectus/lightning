<?php

include'animals.php';

function array_sort_vowels($val1, $val2)
{
	$m1 = preg_match_all("/([aeiou])/", $val1);
	$m2 = preg_match_all("/([aeiou])/", $val2);
	return $m1 - $m2;
}

usort($animals, "array_sort_vowels");
view($animals, "user-sort");
