<?php

include'animals.php';

function array_sort_vowels($val1, $val2)
{
	$vowels = str_split("aeiou");
	$tot1 = $tot2 = 0;
	foreach ($vowels as $v)
	{
		$tot1 += substr_count($val1, $v);
		$tot2 += substr_count($val2, $v);
	}
	return $tot1 - $tot2;
}

usort($animals, array_sort_vowels);
view($animals, "user-sort");
