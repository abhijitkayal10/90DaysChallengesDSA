
var longestCommonPrefix = function(strs) {
    strs.sort();
let first = strs[0];
let last = strs[strs.length-1];
let minLength = Math.min(first.length, last.length);

let i = 0;
while(i<minLength && first[i]==last[i]){
    i++;
}
return first.substring(0,i);
};
