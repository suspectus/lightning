<?php

$a = [ 2=>'two',1=>'one',0=>'zero' ];

$a[]='three';

print_r($a);
sort($a);
print_r($a);
