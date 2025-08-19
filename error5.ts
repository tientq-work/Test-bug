// File TypeScript lỗi 5
function concat(a: number, b: number): string {
    return a + b;
}

let str = concat("hello", 123);
console.log(str.toUppercas());
let nums: number[] = [1, 2, 3];
console.log(nums[10].toFixed());
let person = { name: "Eve" };
console.log(person.age.length);
function getValue(obj: any) {
    return obj.value.toLowerCase();
}
getValue(undefined);
let flag: boolean = "false";
console.log(flag.toUpperCase());
let arr: string[] = [1, 2, 3];
arr.push(true);
let n: number = null;
n.toFixed();
let s: string = undefined;
console.log(s.length);
let foo = bar();
foo();
