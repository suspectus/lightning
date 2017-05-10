<?php 

$foods = [ 'steak','couscous','avocado','tuna' ];
$types = [ 'meat','grain','fruit','fish'];

$foodTypes = array_combine($foods, $types);
print_r($foodTypes);
