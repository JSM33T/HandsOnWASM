// main.js
async function calculateResult() {
    
    // Define an empty imports object
    const imports = {};

    const { instance } = await WebAssembly.instantiateStreaming(fetch('fibonaccisum.wasm'), imports);

    const inputA = parseInt(document.getElementById('inputA').value, 10);
    const startTime = performance.now();
    const result = instance.exports.fibonaccisum(inputA);
    const endTime = performance.now();
    document.getElementById('result').innerText = `Result: ${result}`;
   
    const executionTime = endTime - startTime;

    console.log(`wasm function executed in ${executionTime} milliseconds`);
    
}

async function calculateResultJS() {
  
    const inputA = parseInt(document.getElementById('inputA').value, 10);

    function fibonacciSum(n) {
        if (n <= 1) {
            return n;
        } else {
            return fibonacciSum(n - 1) + fibonacciSum(n - 2); // Adding 1 for each term in the series
        }
    }
    const startTime = performance.now();
    const result = fibonacciSum(inputA);
    const endTime = performance.now();
    document.getElementById('jsresult').innerText = `Result: ${result}`;
   
    const executionTime = endTime - startTime;

    console.log(`js function executed in ${executionTime} milliseconds`);
}