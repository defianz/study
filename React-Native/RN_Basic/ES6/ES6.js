// var hello = 'world';
// var hello = 'hi';
// // 같은변수를 두번 호출해도 오류가 나지 않음

// // var 는 함수단위의 scope 을 가짐 (block 단위가 아니기 때문에 if문으로 작성시 global 변수가 바뀜)
// // let 은 block 단위로 바뀌어서, if 문으로 작성해도 정상적으로 바뀜
// // => 정상 : 함수(블록)안에서 변수는 local만 변하고, global은 변하지 않음
// function test() {
//   var hello = 'korea';
//   console.log(hello);
// }

// test();

// console.log(hello);

// object

let json = {key: 'hi', key2: 'hi2'};
let json2 = {key3: 'hi', ...json};

console.log(json2);
