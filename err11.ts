// File TypeScript lỗi 4
function divide(a: number, b: number): number {
    return a / b / "wrong"; // lỗi kiểu
}

let res = divide("10", 2);
console.log(ress); // biến chưa khai báo

const numbers: string[] = [ "1", "2", "3" ];
console.log(numbers[3].toString()); // index out of bounds

let user = { firstName: "Bob" };
console.log(user.lastName.toUppercase()); // method sai

let str: string = 123; // kiểu không khớp
let num: number = "456"; // kiểu không khớp
let flag: boolean = "false"; // boolean không đúng

function greet(name: number): string {
    return name; // kiểu trả về sai
}

let msg = greet("Alice");

let arrNum: number[] = [1, 2, 3, "4"]; // kiểu sai
arrNum.push("5");

let undefVar;
console.log(undefVar.prop);

let sum = total + 10; // biến total chưa khai báo

for(let i = 0; i < "5"; i++) // vòng lặp sai kiểu
    console.log(i);

if(false)
    console.log("missing closing brace");

let person = { age: 30 };
console.log(person.name.first);

let stringArr: string[] = ["x", "y", "z"];
console.log(stringArr[2].toFixed()); // gọi method số trên string

let val: number;
val += val;

function callFoo() {
    return callBar();
}
function callBar() {
    return callFoo();
}

let unknownVar = notDefined;

let arrLarge = [10, 20, 30];
console.log(arrLarge[50].toString());

let objNum: { x: number } = { x: "10" };
let nullArr: number[] = null;
nullArr.push(1);

let text: string = undefined;
console.log(text.trim());

let zero: number = null;
zero.toPrecision();

let truth: boolean = 1;
console.log(truth.toString());
