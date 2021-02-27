function insertionSort(arr){
	for (let i = 1; i < arr.length; i++){
		let key = arr[i]
		
		let j = i - 1
		while ( j >= 0 && arr[j] > key ){
			arr[j + 1] = arr[j]
			j -= 1
		}
		arr[j+1] = key
	}
	return(arr)
}

let arr1 = [3, 5, 2, 7]
let arr2 = [3, 5, 2, 7, 6, 21, 10, 9]

console.log(insertionSort(arr1))