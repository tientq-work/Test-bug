// File TypeScript lỗi 3
function multiply(a: string, b: string): number {
    return a * b;
}

let result = multiply(2, "abc");
console.log(resultt);
const arr: number[] = [1, 2, 3];
console.log(arr[5].toFixed());
let obj = {};
console.log(obj.name.first);

// Thêm nhiều lỗi khác nhau
let a: number = "string";
let b: string = 123;
let c: boolean = 1;
let d: any = undefined;
console.log(a.toUpperCase());
function test(x: number): string {
    return x;
}
let e = test("abc");
let f: number[] = [1, 2, "three"];
f.push("four");
let g = h + 1;
for(let i = 0; i < 5; i++)
    console.log(i)
if(true)
    console.log("missing brace")
let obj2 = { name: "Alice" };
console.log(obj2.age.toFixed());
let arr2: string[] = ["a", "b", "c"];
console.log(arr2[1].toFixed());
let x: number;
x = x + 1;
function foo() {
    return bar();
}
function bar() {
    return foo();
}
let y = z;
let arr3 = [1, 2, 3];
console.log(arr3[100].toFixed());
let obj3: { a: number } = { a: "b" };
let arr4: number[] = null;
arr4.push(5);
let s: string = undefined;
console.log(s.length);
let n: number = null;
n.toFixed();
let bool: boolean = "true";
console.log(bool.toUpperCase());
