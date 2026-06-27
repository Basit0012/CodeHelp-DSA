/**
 * @param {number[]} nums
 * @return {number}
 */
// let  majorityElement = function(nums) {
//     nums.sort((a, b) => a - b);
//     return nums[Math.floor(nums.length / 2)];
// };


var majorityElement = function(nums) {
    let freq = new Map();
    let n = nums.length;

    for (let num of nums) {
        freq.set(num, (freq.get(num) || 0) + 1);

        if (freq.get(num) > Math.floor(n / 2)) {
            return num;
        }
    }
};
