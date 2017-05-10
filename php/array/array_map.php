<?php

$det = array(
	'name'=> 'Fred',
	'surname' => 'O\'Keefe',
	'address' => '6 St Stephen\'s Walk',
);

print_r($det);
function escape($val) { return str_replace("'","''",$val); }
$det2 = array_map('escape', $det);
print_r($det2);

