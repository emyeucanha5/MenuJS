const numbers = [175, 50, 25];

numbers.sort();
let k = numbers[0];
const newNumber = numbers.reduce(function(prev,cur, index){
	console.log(cur);
	if(prev[0]=="undefined"){
		prev.push(cur);	
	}
	else{
		k = k-cur;
		prev.push(k);
	}
	return prev;
},[])
// a bit test to understand reduce