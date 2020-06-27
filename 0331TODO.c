// // a: rdi
// // b: rsi
// // c: rdx
// // dest: rcx

// void switcher(long a, long b, long c, long *dest) {
//   long val;
//   switch(a) {
//     case ???:
//       c = ???;
//     case ???:
//       val = ???;
//       break;
//     case 2:
//     case 7:
//       val = (b + c) * 4;
//       break;
//     case ???:
//       val = ???;
//       break;
//     default:
//       val = a;
//   }
//   *dest = val;
// }