<?php
	
	$d = readline();
	
	$e = explode("/", $d);
	
	$days = 365;
	
	if ($e[1] <= 6) {
	    $days = $days - 5 * 30 - 29;
	    $days = $days - (6 - $e[1]) * 31;
	    $days = $days - 31 + $e[2];
	}else if ($e[1] <= 11) {
	  $days = $days - 29;
	  $days = $days - (11 - $e[1]) * 30;
	  $days = $days - 30 + $e[2];
	}else {
	  $days = $days - 29 + $e[2];
	}
	
	
	echo 365 - $days + 1;
	
	// powered by Rahmat
	// Email: Rahmat2022a@gmail.com
	// Github: https://github.com/EnAnsari
	// question link: https://quera.org/problemset/57760/
?>