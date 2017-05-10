<?php

include'animals.php';

echo "Now append the length of each name to the nane" . PHP_EOL;

sort($animals);
view($animals, "sort");
shuffle($animals);
view($animals, "shuffle");
view(array_flip($animals),  "flip");

