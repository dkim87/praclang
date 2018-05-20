function smallestCommons(arr){

	numberOne = 0;
	numberTwo = 0;

	if (arr[0] < arr[1]){
		numberOne = arr[0];
		numberTwo = arr[1];
	}else{
		numberOne = arr[1];
		numberTwo = arr[0];
	}

	smallest = 1;
	while (1){
		commons = true;
		for (let i = numberOne; i <= numberTwo; i++){
			if(smallest % i != 0){
				commons = false;
			}
		}

		if (commons == true){
			return smallest;
		}

		smallest++;
	}
}

console.log(smallestCommons([1, 5]));
