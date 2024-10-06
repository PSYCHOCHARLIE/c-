let c = 5; // how to define a variable
console.log(c);

/*creation of function
function name(x , y){
    return 1+(x+y)/2;
}

const name = ()=>{
    console.log("another way to create a funciton other than the above one");
    return "okay";
}*/

// strings
 let name = "rishikesh";
 console.log(name.slice(2,4));// used to remove the letters


// how to input a value
let z = prompt("what is your age"); // input will just be like python as a string
z = Number.parseInt(z); // convert sting into integer
console.log(z);
if (z > 0)
alert("this is a valid age"); // this will create an alert box in the site when run in console

//objects - like dict in python ,  non primitve data type  **need to use dict**
const item = {
    "Harry":true,
    "shuubh":false,
    "lovist":67,
    "rohan":undefined
}
console.log(item["shubh"]);

let a = 2 ; let b = 3;
console.log("a + b = ",a+b); // can write both the variable in console.log

