// bug-sample.ts
// This file intentionally contains bugs and code smells for Sonar testing

// 1. Unused variable
let unusedVar = 42;

// 2. Function with implicit any parameter
function add(a, b) {
    return a + b;
}

// 3. Possible null reference
let maybeNull: string | null = null;
console.log(maybeNull!.length); // force null access

// 4. Duplicated code / code smell
function greetUser(name: string) {
    console.log("Hello " + name);
}

function greetAdmin(name: string) {
    console.log("Hello " + name);
}

// 5. Magic number
const price = 100 * 1.2;

// 6. Long function / complex function
function complexCalculation(x: number) {
    if (x > 10) {
        for (let i = 0; i < x; i++) {
            console.log(i * 2);
        }
    } else if (x > 5) {
        for (let i = 0; i < x; i++) {
            console.log(i * 3);
        }
    } else {
        for (let i = 0; i < x; i++) {
            console.log(i * 4);
        }
    }
}

complexCalculation(8);
