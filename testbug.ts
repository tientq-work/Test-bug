// BugSample.ts

// Code smell: dùng & thay vì &&
function isBothTrue(a: boolean, b: boolean): boolean {
    return a & b; // Sonar rule: "&&" should be used instead of "&"
}

// Bug: unused variable
let unusedVar = 42;

// Bug: unreachable code
function checkNumber(n: number): string {
    if (n > 10) {
        return "big";
        console.log("This line is unreachable"); // unreachable
    } else {
        return "small";
    }
}

// Bug: implicit any
function add(x, y) {
    return x + y;
}

// Bug: console.log in production (optional smell)
console.log("This should be removed in prod");

// Example usage
console.log(isBothTrue(true, false));
console.log(checkNumber(15));
console.log(add(5, 7));
